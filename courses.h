#ifndef COURSES_H
#define COURSES_H
#include "mydb.h"
#include <QDialog>

namespace Ui {
class Courses;
}

class Courses : public QDialog
{
    Q_OBJECT

public:
    explicit Courses(QWidget *parent = nullptr);
    ~Courses();

private slots:
    void on_btn_Course_Submit_clicked();

    void on_btn_Reset_Course_clicked();

    void on_btn_Course_back_clicked();

private:
    Ui::Courses *ui;
};

#endif // COURSES_H
