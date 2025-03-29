#ifndef SMARTRECORDLBTC_H
#define SMARTRECORDLBTC_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class SmartRecordLBTC;
}
QT_END_NAMESPACE

class SmartRecordLBTC : public QMainWindow
{
    Q_OBJECT

public:
    SmartRecordLBTC(QWidget *parent = nullptr);
    ~SmartRecordLBTC();

private slots:


private:
    Ui::SmartRecordLBTC *ui;
};
#endif // SMARTRECORDLBTC_H
