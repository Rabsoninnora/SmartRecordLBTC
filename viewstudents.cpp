#include "viewstudents.h"
#include "ui_viewstudents.h"

ViewStudents::ViewStudents(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ViewStudents)
{
    ui->setupUi(this);
}

ViewStudents::~ViewStudents()
{
    delete ui;
}
