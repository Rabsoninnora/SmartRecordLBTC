#include "courses.h"
#include "ui_courses.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>
#include <QFileInfo>
#include <QDebug>
#include <QPlainTextEdit>
#include <QLineEdit>

Courses::Courses(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Courses)
{
    ui->setupUi(this);
    setWindowTitle("v1.0");
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);
}

Courses::~Courses()
{
    delete ui;
}

void Courses::on_btn_Course_Submit_clicked()
{
    QString Department=ui->comboBox_Departments->currentText().trimmed();
    QString CODE=ui->lineEdit_code->text().trimmed();
    QString CourseName=ui->lineEdit_Course_Name->text().trimmed();
    QString TotalSubjects=ui->lineEdit_Total_Subjects->text().trimmed();
    QString CourseDuration=ui->lineEdit_Course_Duration->text().trimmed();
    QString SubjectList= ui->plainTextEdit_SubjectList->toPlainText().trimmed();

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    QSqlDatabase::database().transaction();

    query.prepare("INSERT INTO CoursesTable (Department, CODE, CourseName, TotalSubjects, CourseDuration, SubjectList) "
                                    "VALUES (:Department, :CODE, :CourseName, :TotalSubjects, :CourseDuration, :SubjectList)");

    query.bindValue(":Department", Department);
    query.bindValue(":CODE", CODE);
    query.bindValue(":CourseName", CourseName);
    query.bindValue(":TotalSubjects", TotalSubjects);
    query.bindValue(":CourseDuration", CourseDuration);
    query.bindValue(":SubjectList", SubjectList);
    if (query.exec()) {
        QSqlDatabase::database().commit();
        QMessageBox::information(this, "Success", "Course registered successfully!");
    } else {
        QSqlDatabase::database().rollback();
        QMessageBox::critical(this, "Error", "Failed to register Course: " + query.lastError().text());

    }

    foreach (QLineEdit *widget, this->findChildren<QLineEdit*>()) {
        widget->clear();
    }
    foreach (QPlainTextEdit *widget, this->findChildren<QPlainTextEdit*>()) {
        widget->clear();
    }
    qDebug() << "Query:" << query.lastQuery();
    qDebug() << "Error:" << query.lastError().text();

}


void Courses::on_btn_Reset_Course_clicked()
{
    foreach (QLineEdit *widget, this->findChildren<QLineEdit*>()) {
        widget->clear();
    }
    foreach (QPlainTextEdit *widget, this->findChildren<QPlainTextEdit*>()) {
        widget->clear();
    }
}



void Courses::on_btn_Course_back_clicked()
{
    this->close();
}

