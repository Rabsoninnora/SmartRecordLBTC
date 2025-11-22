#include "dashboard.h"
#include "ui_dashboard.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QPushButton>
#include <QLabel>
#include <QFrame>
#include <QPixmap>
#include <QPalette>
#include <QDate>

Dashboard::Dashboard(QWidget *parent)
    : QDialog(parent), ui(new Ui::Dashboard)
{
    ui->setupUi(this);
    this->showFullScreen();
    this->setStyleSheet(loadStylesheet());

    // Instantiate core widgets/pages
    departmentList = new QListWidget(this);
    mainContent = new QStackedWidget(this);

    // Instantiate sub-windows/pages
    ptrAddUser = new AddUser();
    ptrRegisterLecturer = nullptr; // Instantiate when needed if you use it
    ptrViewLecturer = nullptr;     // Instantiate when needed if you use it
    ptrCourses = new Courses();
    ptrDataSetStudents = new DataSetStudents();
    ptrDataSetCourses = new DataSetCourses();

    setupUI();
    setupConnections();

    // Populate departments
    QStringList departments = { "Business", "Hospitality", "Engineering", "Cosmetology" };
    for (const QString &dept : departments) {
        departmentList->addItem(dept);
    }
    if (departmentList->count() > 0) {
        departmentList->setCurrentRow(0);
    }
}

Dashboard::~Dashboard()
{
    delete ui;
    delete ptrAddUser;
    delete ptrCourses;
    delete ptrDataSetStudents;
    delete ptrDataSetCourses;
    // If you later instantiate these, remember to delete them:
    // delete ptrRegisterLecturer;
    // delete ptrViewLecturer;
}

void Dashboard::setupUI()
{
    QVBoxLayout *outerLayout = new QVBoxLayout(this);

    // Top bar with min/logout
    QHBoxLayout *topButtons = new QHBoxLayout();
    topButtons->addStretch();

    QPushButton *minimizeBtn = new QPushButton("_", this);
    QPushButton *closeBtn = new QPushButton("logout", this);
    connect(minimizeBtn, &QPushButton::clicked, this, &Dashboard::showMinimized);
    connect(closeBtn, &QPushButton::clicked, this, &Dashboard::close);

    topButtons->addWidget(minimizeBtn);
    topButtons->addWidget(closeBtn);
    outerLayout->addLayout(topButtons);

    // Main area split left/right
    QHBoxLayout *mainLayout = new QHBoxLayout();

    // Left panel
    QWidget *leftPanel = new QWidget(this);
    leftPanel->setFixedWidth(250);
    QVBoxLayout *leftLayout = new QVBoxLayout(leftPanel);

    QLabel *titleLabel = new QLabel("DASHBOARD", this);
    titleLabel->setAlignment(Qt::AlignCenter);
    titleLabel->setStyleSheet("font-weight: bold; font-size: 18px;");

    QLabel *deptLabel = new QLabel("Departments", this);
    deptLabel->setStyleSheet("font-size: 14px; background-color: rgb(0, 81, 121); color: white; border-radius: 5px; padding: 4px;");

    // Navigation buttons
    QPushButton *BtnAddCourses = createNavButton("Add Course", "AddCoursesBtn");
    QPushButton *coursesBtn = createNavButton("View Courses", "btnCourses");
    QPushButton *studentsBtn = createNavButton("Students", "btnStudents");
    QPushButton *manageDataBtn = createNavButton("Add HOS", "btnManageData");

    leftLayout->addWidget(titleLabel);
    leftLayout->addWidget(deptLabel);
    leftLayout->addWidget(departmentList);
    leftLayout->addSpacing(10);
    leftLayout->addWidget(studentsBtn);
    leftLayout->addWidget(coursesBtn);
    leftLayout->addWidget(manageDataBtn);
    leftLayout->addWidget(BtnAddCourses);
    leftLayout->addStretch();

    // Right panel
    QWidget *rightPanel = new QWidget(this);
    QVBoxLayout *rightLayout = new QVBoxLayout(rightPanel);

    // Main content stacked widget
    rightLayout->addWidget(mainContent);

    // Footer with dynamic year
    int year = QDate::currentDate().year();
    QLabel *footer = new QLabel(QString("© %1 LBTC Student Management System. All rights reserved.").arg(year), this);
    footer->setAlignment(Qt::AlignCenter);
    footer->setStyleSheet("font-size: 14px; color: white; margin-top: 10px;");
    rightLayout->addWidget(footer);

    // Add initial page (with centered background image)
    mainContent->addWidget(createStudentManagementWidget());

    // Compose layouts
    mainLayout->addWidget(leftPanel);
    mainLayout->addWidget(rightPanel, 1);
    outerLayout->addLayout(mainLayout);
    this->setLayout(outerLayout);
}

void Dashboard::setupConnections()
{
    connect(departmentList, &QListWidget::currentRowChanged, this, &Dashboard::switchDepartment);
    connect(findChild<QPushButton*>("btnStudents"), &QPushButton::clicked, this, &Dashboard::viewStudents);
    connect(findChild<QPushButton*>("btnCourses"), &QPushButton::clicked, this, &Dashboard::viewCourses);
    connect(findChild<QPushButton*>("btnManageData"), &QPushButton::clicked, this, &Dashboard::manageData);
    connect(findChild<QPushButton*>("AddCoursesBtn"), &QPushButton::clicked, this, &Dashboard::AddCourses);
}

void Dashboard::switchDepartment()
{
    // Future: respond to department selection, e.g., filter datasets by department
}

void Dashboard::showStudentManagement()
{
    mainContent->setCurrentIndex(0);
}

void Dashboard::viewStudents()
{
    ptrDataSetStudents->show();
}

void Dashboard::viewCourses()
{
    ptrDataSetCourses->show();
}

void Dashboard::manageData()
{
    ptrAddUser->show();
}

void Dashboard::AddCourses()
{
    ptrCourses->show();
}

QPushButton* Dashboard::createNavButton(const QString &text, const QString &objectName)
{
    QPushButton *btn = new QPushButton(text, this);
    btn->setObjectName(objectName);
    btn->setMinimumHeight(40);
    return btn;
}

QString Dashboard::loadStylesheet()
{
    return R"(
        QWidget { background-color: #1e1e2f; font-family: 'Segoe UI'; font-size: 14px; color: #f0f0f0; }
        QListWidget { background-color: #2c2f48; border-radius: 5px; color: #ffffff; }
        QPushButton {
            background-color: #3a3f5c; color: #ffffff; border-radius: 5px;
            padding: 10px 20px; font-weight: bold;
        }
        QPushButton:hover { background-color: #4a4f70; }
        QPushButton:pressed { background-color: #3498db; }
        QLabel { color: #f0f0f0; }
        QTableWidget, QLineEdit, QSpinBox {
            background-color: #ffffff; color: #000000;
            border: 1px solid #ccc; border-radius: 4px;
        }
        QCheckBox { color: #f0f0f0; }
    )";
}

QWidget* Dashboard::createStudentManagementWidget()
{
    QWidget *widget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(widget);

    QLabel *title1 = new QLabel("LBTC Student Management System", widget);
    title1->setAlignment(Qt::AlignCenter);
    title1->setStyleSheet("font-weight: bold; font-size: 15px; margin-bottom: 20px;");
    layout->addWidget(title1);

    // Center background image (use a Qt resource path for portability)
    QLabel *backgroundImage = new QLabel(widget);
    backgroundImage->setAlignment(Qt::AlignCenter);

    // Prefer resource path: add the image to your .qrc as :/images/coverlbtc.jpg
    QPixmap pix("C:/Project@cosmas/SmartRecord/coverlbtc.jpg");
    if (pix.isNull()) {
        // Fallback to absolute path if resource not available
        pix.load("C:/Project@cosmas/SmartRecord/coverlbtc.jpg");
    }
    backgroundImage->setPixmap(pix.scaled(840, 640, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    layout->addWidget(backgroundImage, 1, Qt::AlignCenter);

    layout->addStretch();

    return widget;
}
