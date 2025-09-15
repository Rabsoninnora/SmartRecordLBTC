#ifndef VIEWLECTURER_H
#define VIEWLECTURER_H
#include "mydb.h"

#include <QDialog>

namespace Ui {
class ViewLecturer;
}

class ViewLecturer : public QDialog
{
    Q_OBJECT

public:
    explicit ViewLecturer(QWidget *parent = nullptr);
    ~ViewLecturer();

private slots:
    void on_btn_View_Lecturer_back_clicked();
    void on_btn_search_clicked();
    void on_btn_update_clicked();
    void on_btn_delete_clicked();
    void on_btn_clear_clicked();
    void clearFields();

private:
    Ui::ViewLecturer *ui;
};

#endif // VIEWLECTURER_H
