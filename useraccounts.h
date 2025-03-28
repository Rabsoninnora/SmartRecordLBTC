#ifndef USERACCOUNTS_H
#define USERACCOUNTS_H

#include <QDialog>

namespace Ui {
class UserAccounts;
}

class UserAccounts : public QDialog
{
    Q_OBJECT

public:
    explicit UserAccounts(QWidget *parent = nullptr);
    ~UserAccounts();

private:
    Ui::UserAccounts *ui;
};

#endif // USERACCOUNTS_H
