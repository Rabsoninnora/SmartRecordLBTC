#include "smartrecordlbtc.h"
#include "./ui_smartrecordlbtc.h"

SmartRecordLBTC::SmartRecordLBTC(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SmartRecordLBTC)
{
    ui->setupUi(this);
}

SmartRecordLBTC::~SmartRecordLBTC()
{
    delete ui;
}
