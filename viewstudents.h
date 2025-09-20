#ifndef VIEWSTUDENTS_H
#define VIEWSTUDENTS_H
#include "mydb.h"
#include <QDialog>

namespace Ui {
class ViewStudents;
}

class ViewStudents : public QDialog
{
    Q_OBJECT

public:
    explicit ViewStudents(QWidget *parent = nullptr);
    ~ViewStudents();

private slots:
    void on_btn_Student_Update_clicked();

    void on_btn_Reset_Student_clicked();

    void on_btn_search_clicked();

    void on_btn_Delete_Student_clicked();
     void clearFields();

    void on_btn_RegisterStudent_back_clicked();

private:
    Ui::ViewStudents *ui;
};

#endif // VIEWSTUDENTS_H
