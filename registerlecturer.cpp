#include "registerlecturer.h"
#include "ui_registerlecturer.h"
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

RegisterLecturer::RegisterLecturer(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterLecturer)
{
    ui->setupUi(this);
      setWindowTitle("v1.0");
      setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);
}

RegisterLecturer::~RegisterLecturer()
{
    delete ui;
}

void RegisterLecturer::on_btn_RegisterLecturer_back_clicked()
{
    this->close();
}

void RegisterLecturer::on_btn_Lecturer_browse_image_clicked()
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

void RegisterLecturer::on_btn_submit_lecturer_clicked()
{
    QString Fname = ui->lineEdit_Fname->text();
    QString Mname = ui->lineEdit_Mname->text();
    QString Lname = ui->lineEdit_Lname->text();
    QString NRC = ui->lineEdit_NRC->text();
    QString Phone = ui->lineEdit_Phone->text();
    QString Qualification = ui->lineEdit_Qualification->text();
    QString Department = ui->lineEdit_Lecturer_Department->text();
    QString NoCourses = ui->lineEdit_Lecturer_No_Courses->text();
    QString Subjects = ui->plainTextEdit_Subjects->toPlainText();
    QString Email = ui->lineEdit_Email->text();
    QString Phyc_Add = ui->lineEdit_Physical_Address->text();

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

    query.prepare("INSERT INTO LecturerTable (Fname, Mname, Lname, NRC, Phone, Qualification, Department, NoCourses, Subjects, Email, Phyc_Add, Image_Name, Image_Data) "
                  "VALUES (:Fname, :Mname, :Lname, :NRC, :Phone, :Qualification, :Department, :NoCourses, :Subjects, :Email, :Phyc_Add, :Image_Name, :Image_Data)");

    query.bindValue(":Fname", Fname);
    query.bindValue(":Mname", Mname);
    query.bindValue(":Lname", Lname);
    query.bindValue(":NRC", NRC);
    query.bindValue(":Phone", Phone);
    query.bindValue(":Qualification", Qualification);
    query.bindValue(":Department", Department);
    query.bindValue(":NoCourses", NoCourses);
    query.bindValue(":Subjects", Subjects);
    query.bindValue(":Email", Email);
    query.bindValue(":Phyc_Add", Phyc_Add);
    query.bindValue(":Image_Name", ImageName);
    query.bindValue(":Image_Data", imageData);

    if (query.exec()) {
        QSqlDatabase::database().commit();
        QMessageBox::information(this, "Success", "Lecturer registered successfully!");
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

void RegisterLecturer::on_btn_Reset_Lecturer_clicked()
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
