#include "studentregistration.h"
#include "ui_studentregistration.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QPixmap>
#include <QImage>
#include <QBuffer>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>
#include <QFileInfo>
#include <QDebug>
#include <QPlainTextEdit>
#include <QLineEdit>

StudentRegistration::StudentRegistration(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StudentRegistration)
{
    ui->setupUi(this);
    setWindowTitle("v1.0");
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);
}

StudentRegistration::~StudentRegistration()
{
    delete ui;
}

void StudentRegistration::on_btn_RegisterStudent_back_clicked()
{
    this->close();
}


void StudentRegistration::on_btn_submit_lecturer_clicked()
{


    QString Fname = ui->lineEdit_Fname->text();
    QString Mname = ui->lineEdit_Mname->text();
    QString Lname = ui->lineEdit_Lname->text();
    QString Program =ui->lineEdit_Student_Program->text();
    QString Stud_ID = ui->lineEdit_Student_ID->text();
    QString Enro_year =ui->lineEdit_Enro_year->text();
    QString Duration =ui->lineEdit_Course_Duration->text();
    QString Status =ui->lineEdit_Student_Status->text();
    QString Phone = ui->lineEdit_Student_Phone->text();
    QString Email =ui->lineEdit_Student_Email->text();
    QString NextOfKin_Phone= ui->lineEdit_Stud_NXTOF_KIN->text();


    QByteArray imageData;
    QString ImageName;

    if (!selectedImagePath.isEmpty()) {
        QPixmap Image(selectedImagePath);
        QBuffer ImageBufferData(&imageData);
        ImageBufferData.open(QIODevice::WriteOnly);
        Image.save(&ImageBufferData, "JPG"); // Save as JPG
        QFileInfo fileInfo(selectedImagePath);
        ImageName = fileInfo.fileName();
        imageData = ImageBufferData.buffer(); // Raw binary

    }

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    QSqlDatabase::database().transaction();

    query.prepare("INSERT INTO StudentsTable (Fname, Mname, Lname, Program, Stud_ID, Enro_year, Duration, Status, Phone, Email, NextOfKin_Phone, Image_Name, Image_Data) "
                  "VALUES (:Fname, :Mname, :Lname, :Program, :Stud_ID, :Enro_year, :Duration, :Status, :Phone, :Email, :NextOfKin_Phone, :Image_Name, :Image_Data)");

    query.bindValue(":Fname", Fname);
    query.bindValue(":Mname", Mname);
    query.bindValue(":Lname", Lname);
    query.bindValue(":Program", Program);
    query.bindValue(":Stud_ID", Stud_ID);
    query.bindValue(":Enro_year", Enro_year);
    query.bindValue(":Duration", Duration);
    query.bindValue(":Status", Status);
    query.bindValue(":Phone", Phone);
    query.bindValue(":Email", Email);
    query.bindValue(":NextOfKin_Phone", NextOfKin_Phone);
    query.bindValue(":Image_Name", ImageName);
    query.bindValue(":Image_Data", imageData);

    if (query.exec()) {
        QSqlDatabase::database().commit();
        QMessageBox::information(this, "Success", "Student registered successfully!");
    } else {
        QSqlDatabase::database().rollback();
        QMessageBox::critical(this, "Error", "Failed to register lecturer: " + query.lastError().text());
    }

    foreach (QLineEdit *widget, this->findChildren<QLineEdit*>()) {
        widget->clear();
    }
    foreach (QPlainTextEdit *widget, this->findChildren<QPlainTextEdit*>()) {
        widget->clear();
    }
    ui->image_field->clear();
    selectedImagePath.clear();


}


void StudentRegistration::on_btn_Reset_Lecturer_clicked()
{
    foreach (QLineEdit *widget, this->findChildren<QLineEdit*>()) {
        widget->clear();
    }
    foreach (QPlainTextEdit *widget, this->findChildren<QPlainTextEdit*>()) {
        widget->clear();
    }
    ui->image_field->clear();
    selectedImagePath.clear();
}


void StudentRegistration::on_btn_Student_browse_image_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this, tr("Open File"), QDir::homePath(), tr("Images (*.png *.jpg *.jpeg *.bmp)"));
    if (!file_name.isEmpty()) {
        QImage img(file_name);
        QPixmap pix = QPixmap::fromImage(img);
        int w = ui->image_field->width();
        int h = ui->image_field->height();
        ui->image_field->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
        selectedImagePath = file_name; // Store for later use
    }
}

