#ifndef STUDENTREGISTRATION_H
#define STUDENTREGISTRATION_H
#include "mydb.h"

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

private slots:
    void on_btn_RegisterStudent_back_clicked();

    void on_btn_submit_lecturer_clicked();

    void on_btn_Reset_Lecturer_clicked();

    void on_btn_Student_browse_image_clicked();

private:


    Ui::StudentRegistration *ui;
    QByteArray FinalDataToSave;
    QFileInfo FileInfo;
    QString ImageName;
    QString selectedImagePath;


    QByteArray imageData; // Adding this member variable to store image data
};

#endif // STUDENTREGISTRATION_H
