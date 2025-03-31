#ifndef STUDENTREGISTRATION_H
#define STUDENTREGISTRATION_H


#include <QDialog>

namespace Ui {
class StudentRegistration;
}

class StudentRegistration : public QDialog
{
    Q_OBJECT

public:
    explicit StudentRegistration(QWidget *parent = nullptr);
    ~StudentRegistration();

private:


    Ui::StudentRegistration *ui;
};

#endif // STUDENTREGISTRATION_H
