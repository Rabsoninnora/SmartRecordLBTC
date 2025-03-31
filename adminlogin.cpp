#include "adminlogin.h"
#include "ui_adminlogin.h"

Adminlogin::Adminlogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Adminlogin)
{
    ui->setupUi(this);
}

Adminlogin::~Adminlogin()
{
    delete ui;
}
