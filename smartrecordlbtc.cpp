#include "smartrecordlbtc.h"
#include "./ui_smartrecordlbtc.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

SmartRecordLBTC::SmartRecordLBTC(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SmartRecordLBTC)
{


    ui->setupUi(this);
   // this->showFullScreen();
    ptrAdminlogin = new Adminlogin();
}

SmartRecordLBTC::~SmartRecordLBTC()
{
    delete ui;
    delete ptrAdminlogin;
}




void SmartRecordLBTC::on_btn_admin_login_clicked()
{
    ptrAdminlogin->show();
}

