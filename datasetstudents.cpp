#include "datasetstudents.h"
#include "ui_datasetstudents.h"
#include "mydb.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QMessageBox>
#include <QDebug>

DataSetStudents::DataSetStudents(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DataSetStudents)
{
    ui->setupUi(this);
    setWindowTitle("v1.0");
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);

    // Hide table initially
    ui->tableWidget->setVisible(false);

    // Set up table headers (adjust column count to match your schema)
    ui->tableWidget->setColumnCount(11);
    ui->tableWidget->setHorizontalHeaderLabels({
        "Fname","Mname","Lname","Program","Stud_ID",
        "Enro_year","Duration","Status","Phone","Email","NextOfKin_Phone"
    });
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

    // Clear existing rows
    ui->tableWidget->setRowCount(0);

    int row = 0;
    while (query.next()) {
        ui->tableWidget->insertRow(row);
        for (int col = 0; col < query.record().count(); ++col) {
            ui->tableWidget->setItem(row, col, new QTableWidgetItem(query.value(col).toString()));
        }
        row++;
    }

    if (row > 0) {
        ui->tableWidget->setVisible(true);
    } else {
        QMessageBox::information(this, "No Results", "No students found matching your search.");
        ui->tableWidget->setVisible(false);
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

    // Clear existing rows
    ui->tableWidget->setRowCount(0);

    int row = 0;
    while (query.next()) {
        ui->tableWidget->insertRow(row);
        for (int col = 0; col < query.record().count(); ++col) {
            ui->tableWidget->setItem(row, col, new QTableWidgetItem(query.value(col).toString()));
        }
        row++;
    }

    if (row > 0) {
        ui->tableWidget->setVisible(true);
    } else {
        QMessageBox::information(this, "No Results", "No students found in the database.");
        ui->tableWidget->setVisible(false);
    }
}

void DataSetStudents::on_btn_DataSetStudents_Back_clicked()
{
    this->close();
}
