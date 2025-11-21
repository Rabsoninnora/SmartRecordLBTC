#include "datasetstudents.h"
#include "ui_datasetstudents.h"
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

DataSetStudents::DataSetStudents(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DataSetStudents)
{
    ui->setupUi(this);
    setWindowTitle("v1.0");
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);

    // Hide table initially
    ui->tableWidget->setVisible(false);

    // Set up table headers
    ui->tableWidget->setColumnCount(11);
    ui->tableWidget->setHorizontalHeaderLabels({
        "Fname","Mname","Lname","Program","Stud_ID",
        "Enro_year","Duration","Status","Phone","Email","NextOfKin_Phone"
    });

    // Enable sorting and auto‑resize
    ui->tableWidget->setSortingEnabled(true);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    // Connect double‑click
    connect(ui->tableWidget, &QTableWidget::cellDoubleClicked,
            this, &DataSetStudents::onStudentDoubleClicked);
}

DataSetStudents::~DataSetStudents()
{
    delete ui;
}

void DataSetStudents::on_btn_Search_clicked()
{
    QString keyword = ui->lineEdit_Search_Student->text().trimmed();
    if (keyword.isEmpty()) {
        QMessageBox::warning(this, "Input Required", "Please enter a search term.");
        return;
    }

    QSqlDatabase db = MyDB::getInstance()->getDBInstance();
    QSqlQuery query(db);

    QString sql = "SELECT Fname, Mname, Lname, Program, Stud_ID, Enro_year, Duration, Status, Phone, Email, NextOfKin_Phone "
                  "FROM StudentsTable "
                  "WHERE Fname LIKE :kw OR Mname LIKE :kw OR Lname LIKE :kw OR Program LIKE :kw OR Stud_ID LIKE :kw "
                  "OR Enro_year LIKE :kw OR Duration LIKE :kw OR Status LIKE :kw OR Phone LIKE :kw OR Email LIKE :kw OR NextOfKin_Phone LIKE :kw";

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
        QMessageBox::information(this, "No Results", "No students found matching your search.");
    }
}

void DataSetStudents::on_btn_Reset_clicked()
{
    ui->lineEdit_Search_Student->clear();
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setVisible(false);
}

void DataSetStudents::on_btn_View_All_clicked()
{
    QSqlDatabase db = MyDB::getInstance()->getDBInstance();
    QSqlQuery query(db);

    QString sql = "SELECT Fname, Mname, Lname, Program, Stud_ID, Enro_year, Duration, Status, Phone, Email, NextOfKin_Phone "
                  "FROM StudentsTable";

    if (!query.exec(sql)) {
        QMessageBox::critical(this, "Error", "Failed to load all students: " + query.lastError().text());
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
        QMessageBox::information(this, "No Results", "No students found in the database.");
    }
}

void DataSetStudents::on_btn_DataSetStudents_Back_clicked()
{
    this->close();
}

void DataSetStudents::onStudentDoubleClicked(int row, int column)
{
    Q_UNUSED(column);
    if (row < 0) return;

    QString fname    = ui->tableWidget->item(row, 0)->text();
    QString mname    = ui->tableWidget->item(row, 1)->text();
    QString lname    = ui->tableWidget->item(row, 2)->text();
    QString program  = ui->tableWidget->item(row, 3)->text();
    QString studID   = ui->tableWidget->item(row, 4)->text();
    QString enroYear = ui->tableWidget->item(row, 5)->text();
    QString duration = ui->tableWidget->item(row, 6)->text();
    QString status   = ui->tableWidget->item(row, 7)->text();
    QString phone    = ui->tableWidget->item(row, 8)->text();
    QString email    = ui->tableWidget->item(row, 9)->text();
    QString kinPhone = ui->tableWidget->item(row, 10)->text();

    // Custom dialog
    QDialog detailDialog(this);
    detailDialog.setWindowTitle("Student Details");
    detailDialog.setModal(true);

    QVBoxLayout *layout = new QVBoxLayout(&detailDialog);

    layout->addWidget(new QLabel("First Name: " + fname));
    layout->addWidget(new QLabel("Middle Name: " + mname));
    layout->addWidget(new QLabel("Last Name: " + lname));
    layout->addWidget(new QLabel("Program: " + program));
    layout->addWidget(new QLabel("Student ID: " + studID));
    layout->addWidget(new QLabel("Enrollment Year: " + enroYear));
    layout->addWidget(new QLabel("Duration: " + duration));
    layout->addWidget(new QLabel("Status: " + status));
    layout->addWidget(new QLabel("Phone: " + phone));
    layout->addWidget(new QLabel("Email: " + email));
    layout->addWidget(new QLabel("Next of Kin Phone: " + kinPhone));

    QPushButton *closeBtn = new QPushButton("Close");
    connect(closeBtn, &QPushButton::clicked, &detailDialog, &QDialog::accept);
    layout->addWidget(closeBtn);

    detailDialog.exec();
}
