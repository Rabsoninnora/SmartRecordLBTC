#include "studentregistration.h"
#include "ui_studentregistration.h"

StudentRegistration::StudentRegistration(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StudentRegistration)
{
    ui->setupUi(this);
}

StudentRegistration::~StudentRegistration()
{
    delete ui;
}
