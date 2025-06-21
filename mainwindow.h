#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "adminlogin.h"

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
};

#endif // MAINWINDOW_H
