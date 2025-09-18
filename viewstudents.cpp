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

void ViewStudents::on_btn_Student_Update_clicked()
{

}


void ViewStudents::on_btn_Update_Student_clicked()
{

}


void ViewStudents::on_btn_Reset_Student_clicked()
{

}


void ViewStudents::on_btn_search_clicked()
{

}

