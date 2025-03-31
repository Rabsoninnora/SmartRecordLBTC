#ifndef SMARTRECORDLBTC_H
#define SMARTRECORDLBTC_H
#include "adminlogin.h"
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


    void on_btn_admin_login_clicked();

private:
    Adminlogin   *ptrAdminlogin;
    Ui::SmartRecordLBTC *ui;
};
#endif // SMARTRECORDLBTC_H
