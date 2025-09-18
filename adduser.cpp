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
    QSqlQuery QueryUpdateData(MyDB::getInstance()->getDBInstance());

    QSqlDatabase::database().transaction();


    // Hash the password before updating

    QByteArray hashedPassword = QCryptographicHash::hash(ui->lineEdit_User_Password->text().toUtf8(), QCryptographicHash::Sha256).toHex();


    QueryUpdateData.prepare("UPDATE HOS SET username=:username, password=:password WHERE ID=:ID");

    QueryUpdateData.bindValue(":ID", ui->lineEdit_User_ID->text());

    QueryUpdateData.bindValue(":username", ui->lineEdit_User_name->text());

    QueryUpdateData.bindValue(":password", hashedPassword); // Use the hashed password

    if (QueryUpdateData.exec())

    {
        QSqlDatabase::database().commit();
    }

    else

    {
        qDebug() << "Update error:" << QueryUpdateData.lastError();
        QSqlDatabase::database().rollback();
    }


    QSqlDatabase::database().close();


    // Clear input fields

    foreach (QLineEdit *widget, this->findChildren<QLineEdit*>())

    {

        widget->clear();

    }


    // Refresh the user table

    on_btn_View_User_clicked();

}


void AddUser::on_btn_Delete_User_clicked()
{
    QSqlQuery Query_Delete_Data( MyDB::getInstance()->getDBInstance());
    QSqlDatabase::database().transaction();
    Query_Delete_Data.prepare("DELETE FROM HOS WHERE ID="+ ui->lineEdit_User_ID->text() +"");
    Query_Delete_Data.exec();
    QSqlDatabase::database().commit();
    QSqlDatabase::database().close();

    foreach(QLineEdit *widget, this->findChildren<QLineEdit*>()) { widget->clear();}
    // Refresh the user table

    on_btn_View_User_clicked();
}


void AddUser::on_btn_Insert_User_clicked()
{
    QSqlQuery InsertRecord(MyDB::getInstance()->getDBInstance());
    QSqlDatabase::database().transaction();
    // Hash the password before inserting
    QByteArray hashedPassword = QCryptographicHash::hash(ui->lineEdit_User_Password->text().toUtf8(), QCryptographicHash::Sha256).toHex();
    InsertRecord.prepare("INSERT INTO HOS (username,password) VALUES(:username,:password)");
    InsertRecord.bindValue(":username", ui->lineEdit_User_name->text());
    InsertRecord.bindValue(":password", hashedPassword); // Use the hashed password
    if (InsertRecord.exec())

    {
        QSqlDatabase::database().commit();
    }
    else
    {
        qDebug() << "Insert error:" << InsertRecord.lastError();
        QSqlDatabase::database().rollback();
    }
    QSqlDatabase::database().close();
    foreach(QLineEdit *widget, this->findChildren<QLineEdit*>()){widget->clear();}
    //refresh the HOS table
    on_btn_View_User_clicked();

}


void AddUser::on_btn_Reset_User_clicked()
{

    foreach(QLineEdit *widget, this->findChildren<QLineEdit*>()){widget->clear();}

}


////////////////////////////////////////////////////////////////////////////////////////////////////////
// Admin buttons

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
    QSqlQuery QueryUpdateData(MyDB::getInstance()->getDBInstance());

    QSqlDatabase::database().transaction();

    // Hash the password before inserting

    QByteArray hashedPassword = QCryptographicHash::hash(ui->lineEdit_Admin_Password->text().toUtf8(), QCryptographicHash::Sha256).toHex();

    QueryUpdateData.prepare("UPDATE Admin SET username=:username, password=:password WHERE ID=:ID");

    QueryUpdateData.bindValue(":ID", ui->lineEdit_Admin_ID->text());

    QueryUpdateData.bindValue(":username", ui->lineEdit_username_admin->text());

    QueryUpdateData.bindValue(":password", hashedPassword); // Use hashedPassword


    if (QueryUpdateData.exec()) {

        QSqlDatabase::database().commit();

    } else {

        qDebug() << "Update error:" << QueryUpdateData.lastError();
        QMessageBox::information(this, "Sorry!", "Enter UNIQUE Username and Password");

        QSqlDatabase::database().rollback();
    }
    QSqlDatabase::database().close();

    // Clear input fields
    foreach(QLineEdit *widget, this->findChildren<QLineEdit*>()) {widget->clear();}


    // Refresh the user table

    on_btn_View_User_clicked();


}


void AddUser::on_btn_Delete_admin_clicked()
{
    QSqlQuery Query_Delete_Data(MyDB::getInstance()->getDBInstance());

    QSqlDatabase::database().transaction();
    Query_Delete_Data.prepare("DELETE FROM Admin WHERE ID="+ ui->lineEdit_Admin_ID->text() +"");

    if (Query_Delete_Data.exec()) {

        QSqlDatabase::database().commit();

    } else {

        qDebug() << "Delete error:" << Query_Delete_Data.lastError();


        QSqlDatabase::database().rollback();

    }


    QSqlDatabase::database().close();


    // Clear input fields

    foreach(QLineEdit *widget, this->findChildren<QLineEdit*>()) {widget->clear();}

    // Refresh the user table

    on_btn_View_admin_clicked();
}


void AddUser::on_btn_Insert_admin_clicked()
{
    QSqlQuery InsertRecord(MyDB::getInstance()->getDBInstance());

    QSqlDatabase::database().transaction();



    // Hash the password before inserting

    QByteArray hashedPassword = QCryptographicHash::hash(ui->lineEdit_Admin_Password->text().toUtf8(), QCryptographicHash::Sha256).toHex();


    InsertRecord.prepare("INSERT INTO Admin(username,password) VALUES(:username,:password)");

    InsertRecord.bindValue(":username", ui->lineEdit_username_admin->text());

    InsertRecord.bindValue(":password", hashedPassword); // Use the hashed password


    if (InsertRecord.exec())

    {

        QSqlDatabase::database().commit();

    }

    else

    {

        qDebug() << "Insert error:" << InsertRecord.lastError();

        QMessageBox::information(this, "Sorry!", "Enter UNIQUE Username and Password");

        QSqlDatabase::database().rollback();

    }


    QSqlDatabase::database().close();

    foreach(QLineEdit *widget, this->findChildren<QLineEdit*>()){widget->clear();}
    // Refresh the user table
    on_btn_View_admin_clicked();
}


void AddUser::on_btn_Reset_admin_clicked()
{
    foreach(QLineEdit *widget, this->findChildren<QLineEdit*>()){widget->clear();}
}


void AddUser::on_btn_adduser_back_clicked()
{
    this->close();
}

