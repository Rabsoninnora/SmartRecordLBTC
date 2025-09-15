#ifndef REGISTERLECTURER_H
#define REGISTERLECTURER_H
#include "mydb.h"

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

private slots:
    void on_btn_RegisterLecturer_back_clicked();

    void on_btn_Lecturer_browse_image_clicked();

    void on_btn_submit_lecturer_clicked();

    void on_btn_Reset_Lecturer_clicked();

private:
    Ui::RegisterLecturer *ui;

    QByteArray FinalDataToSave;
    QFileInfo FileInfo;
    QString ImageName;
    QString selectedImagePath;


    QByteArray imageData; // Adding this member variable to store image data
};

#endif // REGISTERLECTURER_H
