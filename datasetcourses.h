#ifndef DATASETCOURSES_H
#define DATASETCOURSES_H

#include <QDialog>

namespace Ui {
class DataSetCourses;
}

class DataSetCourses : public QDialog
{
    Q_OBJECT

public:
    explicit DataSetCourses(QWidget *parent = nullptr);
    ~DataSetCourses();

private slots:
    void on_btn_Search_Course_clicked();
    void on_btn_View_All_Courses_clicked();
    void on_btn_Reset_Course_clicked();
    void on_btn_DataSetCourse_Back_clicked();

    // Slot for double‑click
    void onCourseDoubleClicked(int row, int column);

private:
    Ui::DataSetCourses *ui;
};

#endif // DATASETCOURSES_H
