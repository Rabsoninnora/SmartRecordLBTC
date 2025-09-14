#ifndef REGISTERLECTURER_H
#define REGISTERLECTURER_H

#include <QDialog>

namespace Ui {
class RegisterLecturer;
}

class RegisterLecturer : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterLecturer(QWidget *parent = nullptr);
    ~RegisterLecturer();

private:
    Ui::RegisterLecturer *ui;
};

#endif // REGISTERLECTURER_H
