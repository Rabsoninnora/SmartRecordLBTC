#include "smartrecordlbtc.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SmartRecordLBTC w;
    w.show();
    return a.exec();
}
