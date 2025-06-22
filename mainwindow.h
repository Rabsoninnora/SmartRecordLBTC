#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "adminlogin.h"
#include  "useraddmin.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_admin_login_clicked();

private:
    Ui::MainWindow *ui;
    Adminlogin *ptrAdminlogin;
    UserAddmin *ptrUserAddmin;

};

#endif // MAINWINDOW_H
