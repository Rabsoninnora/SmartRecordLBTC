#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QDialog>

namespace Ui {
class Adminlogin;
}

class Adminlogin : public QDialog
{
    Q_OBJECT

public:
    explicit Adminlogin(QWidget *parent = nullptr);
    ~Adminlogin();

private:
    Ui::Adminlogin *ui;
};

#endif // ADMINLOGIN_H
