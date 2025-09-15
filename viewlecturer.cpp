#include "viewlecturer.h"
#include "ui_viewlecturer.h"
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
#include <QDebug>

ViewLecturer::ViewLecturer(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ViewLecturer)
{
    ui->setupUi(this);
    ui->lineEdit_Search_Lecturer->setStyleSheet(R"(
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

ViewLecturer::~ViewLecturer()
{
    delete ui;
}
void ViewLecturer::on_btn_View_Lecturer_back_clicked()
{
    this->close();
}
void ViewLecturer::on_btn_search_clicked()
{
    QString nrc = ui->lineEdit_Search_Lecturer->text().trimmed();
    if (nrc.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Enter NRC to search.");
        return;
    }

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    QSqlDatabase::database().transaction();
    query.prepare("SELECT * FROM LecturerTable WHERE NRC = :nrc");
    query.bindValue(":nrc", nrc);

    if (query.exec() && query.next()) {
        ui->lineEdit_Fname->setText(query.value("Fname").toString());
        ui->lineEdit_Mname->setText(query.value("Mname").toString());
        ui->lineEdit_Lname->setText(query.value("Lname").toString());
        ui->lineEdit_NRC->setText(query.value("NRC").toString());
        ui->lineEdit_Phone->setText(query.value("Phone").toString());
        ui->lineEdit_Qualification->setText(query.value("Qualification").toString());
        ui->lineEdit_Lecturer_Department->setText(query.value("Department").toString());
        ui->lineEdit_Lecturer_No_Courses->setText(query.value("NoCourses").toString());
        ui->plainTextEdit_Subjects->setPlainText(query.value("Subjects").toString());
        ui->lineEdit_Email->setText(query.value("Email").toString());
        ui->lineEdit_Physical_Address->setText(query.value("Phyc_Add").toString());

        QByteArray imageData = query.value("Image_Data").toByteArray();
        QPixmap pix;
        pix.loadFromData(imageData);
        ui->image_field->setPixmap(pix.scaled(ui->image_field->size(), Qt::KeepAspectRatio));
    } else {
        QMessageBox::information(this, "Not Found", "Lecturer not found.");
    }
    qDebug()<<"Hi Rabson"<<query.lastError().text();
}

void ViewLecturer::on_btn_update_clicked()
{
    QString nrc = ui->lineEdit_Search_Lecturer->text().trimmed();
    if (nrc.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Enter NRC to update.");
        return;
    }


    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    QSqlDatabase::database().transaction();
    query.prepare("UPDATE LecturerTable SET Fname=:Fname, Mname=:Mname, Lname=:Lname, Phone=:Phone, "
                  "Qualification=:Qualification, Department=:Department, NoCourses=:NoCourses, Subjects=:Subjects, "
                  "Email=:Email, Phyc_Add=:Phyc_Add WHERE NRC=:NRC");

    query.bindValue(":Fname", ui->lineEdit_Fname->text());
    query.bindValue(":Mname", ui->lineEdit_Mname->text());
    query.bindValue(":Lname", ui->lineEdit_Lname->text());
    query.bindValue(":Phone", ui->lineEdit_Phone->text());
    query.bindValue(":Qualification", ui->lineEdit_Qualification->text());
    query.bindValue(":Department", ui->lineEdit_Lecturer_Department->text());
    query.bindValue(":NoCourses", ui->lineEdit_Lecturer_No_Courses->text());
    query.bindValue(":Subjects", ui->plainTextEdit_Subjects->toPlainText());
    query.bindValue(":Email", ui->lineEdit_Email->text());
    query.bindValue(":Phyc_Add", ui->lineEdit_Physical_Address->text());
    query.bindValue(":NRC", nrc);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Lecturer updated.");
    } else {
        QMessageBox::critical(this, "Error", "Update failed: " + query.lastError().text());
    }
}

void ViewLecturer::on_btn_delete_clicked()
{
    QString nrc = ui->lineEdit_Search_Lecturer->text().trimmed();
    if (nrc.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Enter NRC to delete.");
        return;
    }

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    QSqlDatabase::database().transaction();
    query.prepare("DELETE FROM LecturerTable WHERE NRC = :nrc");
    query.bindValue(":nrc", nrc);

    if (query.exec()) {
        QMessageBox::information(this, "Deleted", "Lecturer removed.");
        clearFields();
    } else {
        QMessageBox::critical(this, "Error", "Delete failed: " + query.lastError().text());
    }
}

void ViewLecturer::on_btn_clear_clicked()
{
    clearFields();
}

void ViewLecturer::clearFields()
{
    foreach (QLineEdit *widget, this->findChildren<QLineEdit*>()) {
        widget->clear();
    }
    ui->plainTextEdit_Subjects->clear();
    ui->image_field->clear();
}

