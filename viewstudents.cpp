#include "viewstudents.h"
#include "ui_viewstudents.h"
#include <QSqlError>
#include <QPixmap>

#include <QFileDialog>
#include <QMessageBox>
#include <QImage>
#include <QBuffer>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QFileInfo>

#include <QPlainTextEdit>
#include <QLineEdit>

ViewStudents::ViewStudents(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ViewStudents)
{
    ui->setupUi(this);

    ui->lineEdit_Search_Student->setStyleSheet(R"(
    QLineEdit {
        padding-left: 30px; /* space for icon */
        height: 28px;
        border: 1px solid #ccc;
        border-radius: 14px;

        font-size: 14px;

    }

    QLineEdit:focus {
        border: 1px solid #0078d7;

    }
 )");
}

ViewStudents::~ViewStudents()
{
    delete ui;
}

void ViewStudents::on_btn_Student_Update_clicked()
{

    QString Stud_ID = ui->lineEdit_Search_Student->text().trimmed();
    if (Stud_ID.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Enter NRC to update.");
        return;
    }


    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    QSqlDatabase::database().transaction();
    query.prepare("UPDATE StudentsTable SET Fname=:Fname, Mname=:Mname, Lname=:Lname, Program=:Program, "
                  "Stud_ID=:Stud_ID, Enro_year=:Enro_year, Duration=:Duration, Status=:Status, "
                  "Phone=:Phone, Email=:Email WHERE Stud_ID=:Stud_ID");

    query.bindValue(":Fname", ui->lineEdit_Fname->text());
    query.bindValue(":Mname", ui->lineEdit_Mname->text());
    query.bindValue(":Lname", ui->lineEdit_Lname->text());
    query.bindValue(":Program", ui->lineEdit_Student_Program->text());
    query.bindValue(":Enro_year", ui->lineEdit_Enro_year->text());
    query.bindValue(":Duration", ui->lineEdit_Course_Duration->text());
    query.bindValue(":Status", ui->lineEdit_Student_Status->text());
    query.bindValue(":Phone", ui->lineEdit_Student_Phone->text());
    query.bindValue(":Email", ui->lineEdit_Student_Email->text());
    query.bindValue(":NextOfKin_Phone", ui->lineEdit_Stud_NXTOF_KIN->text());
    query.bindValue(":Stud_ID", Stud_ID);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Student updated.");
    } else {
        QMessageBox::critical(this, "Error", "Update failed: " + query.lastError().text());
    }


}

void ViewStudents::on_btn_Reset_Student_clicked()
{
clearFields();
}


void ViewStudents::on_btn_search_clicked()
{
    QString Stud_ID = ui->lineEdit_Search_Student->text().trimmed();
    if (Stud_ID.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Enter Student ID to search.");
        return;
    }

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    QSqlDatabase::database().transaction();
    query.prepare("SELECT * FROM StudentsTable WHERE Stud_ID = :Stud_ID");
    query.bindValue(":Stud_ID", Stud_ID);

    if (query.exec() && query.next()) {
        ui->lineEdit_Fname->setText(query.value("Fname").toString());
        ui->lineEdit_Mname->setText(query.value("Mname").toString());
        ui->lineEdit_Lname->setText(query.value("Lname").toString());
        ui->lineEdit_Student_Program->setText(query.value("Program").toString());
        ui->lineEdit_Student_ID->setText(query.value("Stud_ID").toString());
        ui->lineEdit_Enro_year->setText(query.value("Enro_year").toString());
        ui->lineEdit_Course_Duration->setText(query.value("Duration").toString());
        ui->lineEdit_Student_Status->setText(query.value("Status").toString());
        ui->lineEdit_Student_Phone->setText(query.value("Phone").toString());
        ui->lineEdit_Student_Email->setText(query.value("Email").toString());
        ui->lineEdit_Stud_NXTOF_KIN->setText(query.value("NextOfKin_Phone").toString());

        QByteArray imageData = query.value("Image_Data").toByteArray();
        QPixmap pix;
        pix.loadFromData(imageData);
        ui->image_field->setPixmap(pix.scaled(ui->image_field->size(), Qt::KeepAspectRatio));
    } else {
        QMessageBox::information(this, "Not Found", "Student not found.");
    }
    qDebug()<<"Hi Rabson"<<query.lastError().text();
}


void ViewStudents::on_btn_Delete_Student_clicked()
{
    QString Stud_ID = ui->lineEdit_Search_Student->text().trimmed();
    if (Stud_ID.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Enter Student ID to delete.");
        return;
    }

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    QSqlDatabase::database().transaction();
    query.prepare("DELETE FROM StudentsTable WHERE Stud_ID = :Stud_ID");
    query.bindValue(":Stud_ID", Stud_ID);

    if (query.exec()) {
        QMessageBox::information(this, "Deleted", "Student removed.");
        clearFields();
    } else {
        QMessageBox::critical(this, "Error", "Delete failed: " + query.lastError().text());
    }
}

void ViewStudents::clearFields()
{
    foreach (QLineEdit *widget, this->findChildren<QLineEdit*>()) {widget->clear();}
    ui->image_field->clear();
}


void ViewStudents::on_btn_RegisterStudent_back_clicked()
{
    this->close();
}

