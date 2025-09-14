#include "registerlecturer.h"
#include "ui_registerlecturer.h"

RegisterLecturer::RegisterLecturer(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterLecturer)
{
    ui->setupUi(this);
}

RegisterLecturer::~RegisterLecturer()
{
    delete ui;
}
