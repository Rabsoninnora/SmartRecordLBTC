#ifndef DATASETSTUDENTS_H
#define DATASETSTUDENTS_H

#include <QDialog>

namespace Ui {
class DataSetStudents;
}

class DataSetStudents : public QDialog
{
    Q_OBJECT

public:
    explicit DataSetStudents(QWidget *parent = nullptr);
    ~DataSetStudents();

private slots:
    void on_btn_Search_clicked();

    void on_btn_Reset_clicked();

    void on_btn_View_All_clicked();

    void on_btn_DataSetStudents_Back_clicked();

private:
    Ui::DataSetStudents *ui;
};

#endif // DATASETSTUDENTS_H
