#include "adduser.h"
#include "ui_adduser.h"
#include "mydb.h"
#include <QCryptographicHash>
#include <QGuiApplication>
#include <QShowEvent>

AddUser::AddUser(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddUser)
{
    ui->setupUi(this);
    this->showFullScreen();
    setWindowFlags(windowFlags()|Qt::WindowStaysOnTopHint);
}

AddUser::~AddUser()
{
    delete ui;
}

void AddUser::on_btn_View_User_clicked()
{
    QSqlQuery QueryLoadData(MyDB::getInstance()->getDBInstance());
    QSqlDatabase::database().transaction();
    QueryLoadData.prepare("SELECT * FROM HOS");

    int NumberOFRowsToDisplay=10;

    if(QueryLoadData.exec()){
        ui->tableWidget->setRowCount(NumberOFRowsToDisplay);
        int RowNumber = 0;
        while (QueryLoadData.next()) {

            ui->tableWidget->setItem( RowNumber, 0, new QTableWidgetItem(QString(QueryLoadData.value("ID").toString())));
            ui->tableWidget->setItem( RowNumber, 1, new QTableWidgetItem(QString(QueryLoadData.value("username").toString())));
            ui->tableWidget->setItem( RowNumber, 2, new QTableWidgetItem(QString(QueryLoadData.value("password").toString())));
            RowNumber=RowNumber+1;
        }
    }

    QSqlDatabase::database().commit();
    QSqlDatabase::database().close();

}


void AddUser::on_btn_Update_User_clicked()
{

}


void AddUser::on_btn_Delete_User_clicked()
{

}


void AddUser::on_btn_Insert_User_clicked()
{

}


void AddUser::on_btn_Reset_User_clicked()
{

}


void AddUser::on_btn_View_admin_clicked()
{
    QSqlQuery QueryLoadData(MyDB::getInstance()->getDBInstance());
    QSqlDatabase::database().transaction();
    QueryLoadData.prepare("SELECT * FROM Admin");

    int NumberOFRowsToDisplay=10;

    if(QueryLoadData.exec()){
        ui->tableWidget_2->setRowCount(NumberOFRowsToDisplay);
        int RowNumber = 0;
        while (QueryLoadData.next()) {

            ui->tableWidget_2->setItem( RowNumber, 0, new QTableWidgetItem(QString(QueryLoadData.value("ID").toString())));
            ui->tableWidget_2->setItem( RowNumber, 1, new QTableWidgetItem(QString(QueryLoadData.value("username").toString())));
            ui->tableWidget_2->setItem( RowNumber, 2, new QTableWidgetItem(QString(QueryLoadData.value("password").toString())));
            RowNumber=RowNumber+1;
        }
    }

    QSqlDatabase::database().commit();
    QSqlDatabase::database().close();


}


void AddUser::on_btn_Update_admin_clicked()
{


}


void AddUser::on_btn_Delete_admin_clicked()
{

}


void AddUser::on_btn_Insert_admin_clicked()
{

}


void AddUser::on_btn_Reset_admin_clicked()
{

}


void AddUser::on_btn_adduser_back_clicked()
{
    this->close();
}

