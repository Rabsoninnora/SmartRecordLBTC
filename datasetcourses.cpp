#include "datasetcourses.h"
#include "ui_datasetcourses.h"
#include "mydb.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QMessageBox>
#include <QDebug>
#include <QHeaderView>
#include <QTableWidgetItem>
#include <QDialog>
#include <QVBoxLayout>
#include <QLabel>
#include <QTextEdit>
#include <QPushButton>

DataSetCourses::DataSetCourses(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DataSetCourses)
{
    ui->setupUi(this);
    setWindowTitle("v1.0");
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);

    // Hide table initially
    ui->tableWidget->setVisible(false);

    // Set up table headers
    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setHorizontalHeaderLabels({
        "Department","CODE","CourseName","TotalSubjects","CourseDuration","SubjectList"
    });

    // Enable sorting and auto‑resize
    ui->tableWidget->setSortingEnabled(true);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // Connect double‑click
    connect(ui->tableWidget, &QTableWidget::cellDoubleClicked,
            this, &DataSetCourses::onCourseDoubleClicked);
}

DataSetCourses::~DataSetCourses()
{
    delete ui;
}

void DataSetCourses::on_btn_Search_Course_clicked()
{
    QString keyword = ui->lineEdit_Search_Course->text().trimmed();
    if (keyword.isEmpty()) {
        QMessageBox::warning(this, "Input Required", "Please enter a search term.");
        return;
    }

    QSqlDatabase db = MyDB::getInstance()->getDBInstance();
    QSqlQuery query(db);

    QString sql = "SELECT Department, CODE, CourseName, TotalSubjects, CourseDuration, SubjectList "
                  "FROM CoursesTable "
                  "WHERE Department LIKE :kw OR CODE LIKE :kw OR CourseName LIKE :kw "
                  "OR TotalSubjects LIKE :kw OR CourseDuration LIKE :kw OR SubjectList LIKE :kw";

    query.prepare(sql);
    query.bindValue(":kw", "%" + keyword + "%");

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Search failed: " + query.lastError().text());
        return;
    }

    ui->tableWidget->setRowCount(0);
    int row = 0;
    while (query.next()) {
        ui->tableWidget->insertRow(row);
        for (int col = 0; col < query.record().count(); ++col) {
            ui->tableWidget->setItem(row, col, new QTableWidgetItem(query.value(col).toString()));
        }
        row++;
    }

    ui->tableWidget->setVisible(row > 0);
    if (row == 0) {
        QMessageBox::information(this, "No Results", "No courses found matching your search.");
    }
}

void DataSetCourses::on_btn_View_All_Courses_clicked()
{
    QSqlDatabase db = MyDB::getInstance()->getDBInstance();
    QSqlQuery query(db);

    QString sql = "SELECT Department, CODE, CourseName, TotalSubjects, CourseDuration, SubjectList FROM CoursesTable";

    if (!query.exec(sql)) {
        QMessageBox::critical(this, "Error", "Failed to load courses: " + query.lastError().text());
        return;
    }

    ui->tableWidget->setRowCount(0);
    int row = 0;
    while (query.next()) {
        ui->tableWidget->insertRow(row);
        for (int col = 0; col < query.record().count(); ++col) {
            ui->tableWidget->setItem(row, col, new QTableWidgetItem(query.value(col).toString()));
        }
        row++;
    }

    ui->tableWidget->setVisible(row > 0);
    if (row == 0) {
        QMessageBox::information(this, "No Results", "No courses found in the database.");
    }
}

void DataSetCourses::on_btn_Reset_Course_clicked()
{
    ui->lineEdit_Search_Course->clear();
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setVisible(false);
}

void DataSetCourses::on_btn_DataSetCourse_Back_clicked()
{
    this->close();
}

void DataSetCourses::onCourseDoubleClicked(int row, int column)
{
    Q_UNUSED(column);
    if (row < 0) return;

    QString department   = ui->tableWidget->item(row, 0)->text();
    QString code         = ui->tableWidget->item(row, 1)->text();
    QString courseName   = ui->tableWidget->item(row, 2)->text();
    QString totalSubjects= ui->tableWidget->item(row, 3)->text();
    QString duration     = ui->tableWidget->item(row, 4)->text();
    QString subjectList  = ui->tableWidget->item(row, 5)->text();

    // Create a custom dialog
    QDialog detailDialog(this);
    detailDialog.setWindowTitle("Course Details");
    detailDialog.setModal(true);

    QVBoxLayout *layout = new QVBoxLayout(&detailDialog);

    layout->addWidget(new QLabel("Department: " + department));
    layout->addWidget(new QLabel("Code: " + code));
    layout->addWidget(new QLabel("Course Name: " + courseName));
    layout->addWidget(new QLabel("Total Subjects: " + totalSubjects));
    layout->addWidget(new QLabel("Duration: " + duration));

    QLabel *subjectLabel = new QLabel("Subject List:");
    layout->addWidget(subjectLabel);

    QTextEdit *subjectText = new QTextEdit();
    subjectText->setReadOnly(true);
    subjectText->setPlainText(subjectList);
    subjectText->setMinimumHeight(150);
    layout->addWidget(subjectText);

    QPushButton *closeBtn = new QPushButton("Close");
    connect(closeBtn, &QPushButton::clicked, &detailDialog, &QDialog::accept);
    layout->addWidget(closeBtn);

    detailDialog.exec();
}
