#include "useraccounts.h"
#include "ui_useraccounts.h"

UserAccounts::UserAccounts(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UserAccounts)
{
    ui->setupUi(this);
}

UserAccounts::~UserAccounts()
{
    delete ui;
}
