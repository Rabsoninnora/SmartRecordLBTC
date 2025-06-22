#ifndef USERADDMIN_H
#define USERADDMIN_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QComboBox>
class UserAddmin : public QDialog
{
    Q_OBJECT

public:
    explicit UserAddmin(QWidget *parent = nullptr);

private slots:
    void handleSubmit();
    void handleReset();

private:
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QComboBox *roleComboBox;
    QPushButton *submitButton;
    QPushButton *resetButton;

};

#endif // USERADDMIN_H
