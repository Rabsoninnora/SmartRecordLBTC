#include "mydb.h"

MyDB*  MyDB::instance = nullptr;

MyDB::MyDB()
{
    init();
}

void MyDB::init()
{
    db = QSqlDatabase::addDatabase("QSQLITE", "Data");
    db.setDatabaseName("C:/Project@cosmas/SmartRecord/SmartRecord.db");

    if(QFile::exists("C:/Project@cosmas/SmartRecord/SmartRecord.db"))
        qDebug() << "DB file";
    else
        qDebug() <<"Hi Rabson sorry I can't find the Database file";

    if(!db.open())
        qDebug() << db.lastError().text();
    else
        qDebug() <<"Hi Rabson Database loaded successfuly happy coding";
}

MyDB *MyDB::getInstance()
{
    qDebug()<< "in MyDB::getInstance()";

    if(instance== nullptr)
        instance= new MyDB();

    return instance;
}

QSqlDatabase MyDB::getDBInstance()
{
    return db;
}

void MyDB::ResetInstance()
{
    delete instance;
    instance = nullptr;
}


MyDB::~MyDB()
{
    db.close();
}



