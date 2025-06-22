#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QVBoxLayout"
#include "QHBoxLayout"
#include "QMessageBox"
#include "QPushButton"
#include "QLabel"
#include "QFrame"
#include "QPixmap"
#include "QPalette"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("v1.0");

    ptrAdminlogin =new Adminlogin();
    ptrUserAddmin = new UserAddmin();

    //creating a central widget
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);


  //creating a main layout
    QHBoxLayout *mainLayout =new QHBoxLayout(centralWidget);


//Creating a side navigation frame
    QFrame *sideNavFrame = new QFrame(this);
sideNavFrame->setFrameShape(QFrame::StyledPanel);
sideNavFrame->setFixedWidth(200); //Setting a fixed width for the side nav
sideNavFrame->setStyleSheet("background-color: rgb(128,128,128);");

QVBoxLayout *sideNavLayout = new QVBoxLayout(sideNavFrame);

//Creating buttons for side nav
QPushButton *btnSettings = new QPushButton("Systeminfo", this);
QPushButton *btnAdminLogin = new QPushButton("Login", this);


//set styles for buttons
btnSettings->setStyleSheet("font-size: 18px; padding: 10px; background-color: rgb(0, 0, 0); border: none; border-radius: 5px;");
btnAdminLogin->setStyleSheet("font-size: 18px; padding 40px; background-color: rgb(0, 81, 121); color: white; border: 1px; border-radius: 5px;");

//setting cursor for buttons
btnSettings->setCursor(Qt::PointingHandCursor);
btnAdminLogin->setCursor(Qt::PointingHandCursor);

//Connect the login button to the slot
connect(btnAdminLogin, &QPushButton::clicked, this, &MainWindow::on_btn_admin_login_clicked);


//Adding buttings to the side navigation layout
sideNavLayout->addWidget(btnSettings);
sideNavLayout->addWidget(btnAdminLogin);
sideNavLayout->addStretch(); //Push Buttons To The Top
///////////////////////////////////////////////////////////////////////

//Create a header
QLabel *headingLabel = new QLabel("Welcome to LBTC Smart Record System");
headingLabel->setAlignment(Qt::AlignCenter);
headingLabel->setStyleSheet("font-size: 28px; font-weight: bold; padding: 10px; color: white;");
/////////////////////////////////////////////////////////////////////////////////////////////////

QLabel *BodyLabel = new QLabel(" ", this);
BodyLabel->setStyleSheet("Background-color: rgb(81, 81, 121);");
BodyLabel->setAlignment(Qt::AlignTop);
QPixmap bodyLabelPixmap("C:/Project@cosmas/SmartRecord/student.jpg"); //Path to backgroung image
BodyLabel->setPixmap(bodyLabelPixmap.scaled(size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation));
BodyLabel->setScaledContents(true); // Ensuring the pixmap scales with the label
BodyLabel->setAttribute(Qt::WA_TransparentForMouseEvents);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Adding a side navigation and header to the main layout
mainLayout->addWidget(sideNavFrame); // side nav on the left
QVBoxLayout *contentLayout = new QVBoxLayout();
contentLayout->addWidget(headingLabel);
contentLayout->addWidget(BodyLabel);
mainLayout->addLayout(contentLayout); //added content layout to the main layout





}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_admin_login_clicked()
{
 //ptrAdminlogin->show();
 ptrUserAddmin->show();
}


