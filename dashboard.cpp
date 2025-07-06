#include "dashboard.h"
#include "ui_dashboard.h"

Dashboard::Dashboard(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dashboard)
{
    ui->setupUi(this);
    this->showFullScreen();
    this->setStyleSheet(loadStylesheet());

    departmentList = new QListWidget(this);
    mainContent = new QStackedWidget(this);

    setupUI();
    setupConnections();

    QStringList departments = {
        "Business",
        "Hospitality",
        "Engineering",
        "Computer Science",
        "Arts & Humanities",
        "Health Sciences",
        "Education"
    };

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
}

void Dashboard::setupUI()
{
    QHBoxLayout *mainLayout = new QHBoxLayout(this);

    // Left Sidebar Panel
    QWidget *leftPanel = new QWidget(this);
    leftPanel->setFixedWidth(250);
    QVBoxLayout *leftLayout = new QVBoxLayout(leftPanel);

    QLabel *titleLabel = new QLabel("DASHBOARD", this);
    titleLabel->setAlignment(Qt::AlignCenter);
    titleLabel->setStyleSheet("font-weight: bold; font-size: 18px; margin-bottom: 10px;");

    QLabel *deptLabel = new QLabel("Departments", this);

    deptLabel->setStyleSheet("font-size: 14px; margin-top: 10px; padding 40px; background-color: rgb(0, 81, 121); color: white; border: 1px; border-radius: 5px;");

    // Navigation Buttons
    QPushButton *studentsBtn = createNavButton("Students", "btnStudents");
    QPushButton *coursesBtn = createNavButton("Courses", "btnCourses");
    QPushButton *reportsBtn = createNavButton("Reports", "btnReports");
    QPushButton *settingsBtn = createNavButton("Settings", "btnSettings");
    QPushButton *viewStudentsBtn = createNavButton("View Students", "btnViewStudents");
    QPushButton *registerStudentBtn = createNavButton("Register Student", "btnRegisterStudent");
    QPushButton *manageDataBtn = createNavButton("Manage Data", "btnManageData");
    QPushButton *logoutBtn = createNavButton("Logout", "btnLogout");

    leftLayout->addWidget(viewStudentsBtn);
    leftLayout->addWidget(registerStudentBtn);
    leftLayout->addWidget(manageDataBtn);
    leftLayout->addWidget(logoutBtn);


    leftLayout->addWidget(titleLabel);
    leftLayout->addWidget(deptLabel);
    leftLayout->addWidget(departmentList);
    leftLayout->addSpacing(10);
    leftLayout->addWidget(studentsBtn);
    leftLayout->addWidget(coursesBtn);
    leftLayout->addWidget(reportsBtn);
    leftLayout->addWidget(settingsBtn);
    leftLayout->addStretch();

    // Right Main Content Area
    QWidget *rightPanel = new QWidget(this);
    QVBoxLayout *rightLayout = new QVBoxLayout(rightPanel);
    rightLayout->addWidget(mainContent);

    mainContent->addWidget(createStudentManagementWidget());
    mainContent->addWidget(createCourseManagementWidget());
    mainContent->addWidget(createReportWidget());
    mainContent->addWidget(createSettingsWidget());
    QHBoxLayout *topRightButtons = new QHBoxLayout();
    topRightButtons->addStretch(); // Push buttons to the right

    QPushButton *minimizeBtn = new QPushButton("_", this);
    QPushButton *closeBtn = new QPushButton("X", this);
    minimizeBtn->setFixedSize(30, 30);
    closeBtn->setFixedSize(30, 30);

    minimizeBtn->setStyleSheet("background-color: #2c2f48; color: white; border: none;");
    closeBtn->setStyleSheet("background-color: #e74c3c; color: white; border: none;");

    topRightButtons->addWidget(minimizeBtn);
    topRightButtons->addWidget(closeBtn);

    connect(minimizeBtn, &QPushButton::clicked, this, &Dashboard::showMinimized);
    connect(closeBtn, &QPushButton::clicked, this, &Dashboard::close);

    // Add to main layout
    mainLayout->addLayout(topRightButtons);

    mainLayout->addWidget(leftPanel);
    mainLayout->addWidget(rightPanel, 1);

    this->setLayout(mainLayout);
}


void Dashboard::setupConnections()
{
    connect(departmentList, &QListWidget::currentRowChanged, this, &Dashboard::switchDepartment);
    connect(findChild<QPushButton*>("btnStudents"), &QPushButton::clicked, this, &Dashboard::showStudentManagement);
    connect(findChild<QPushButton*>("btnCourses"), &QPushButton::clicked, this, &Dashboard::showCourseManagement);
    connect(findChild<QPushButton*>("btnReports"), &QPushButton::clicked, this, &Dashboard::showReports);
    connect(findChild<QPushButton*>("btnSettings"), &QPushButton::clicked, this, &Dashboard::showSettings);
    connect(findChild<QPushButton*>("btnViewStudents"), &QPushButton::clicked, this, &Dashboard::viewStudents);
    connect(findChild<QPushButton*>("btnRegisterStudent"), &QPushButton::clicked, this, &Dashboard::registerStudent);
    connect(findChild<QPushButton*>("btnManageData"), &QPushButton::clicked, this, &Dashboard::manageData);
    connect(findChild<QPushButton*>("btnLogout"), &QPushButton::clicked, this, &Dashboard::logout);

}

void Dashboard::switchDepartment()
{


}

void Dashboard::showStudentManagement() { mainContent->setCurrentIndex(0); }
void Dashboard::showCourseManagement() { mainContent->setCurrentIndex(1); }
void Dashboard::showReports() { mainContent->setCurrentIndex(2); }
void Dashboard::showSettings() { mainContent->setCurrentIndex(3); }

QPushButton* Dashboard::createNavButton(const QString &text, const QString &objectName) {
    QPushButton *btn = new QPushButton(text, this);
    btn->setObjectName(objectName);
    btn->setMinimumHeight(40);
    return btn;
}

QString Dashboard::loadStylesheet() {
    return R"(
        QWidget {
            background-color: #1e1e2f;
            font-family: 'Segoe UI', sans-serif;
            font-size: 14px;
            color: #f0f0f0;
        }

        QListWidget {
            background-color: #2c2f48;
            border: none;
            border-radius: 5px;
            color: #ffffff;
        }

        QPushButton {
            background-color: #3a3f5c;
            color: #ffffff;
            border: none;
            border-radius: 5px;
            padding: 10px 20px;
            font-weight: bold;
        }

        QPushButton:hover {
            background-color: #4a4f70;
        }

        QPushButton:pressed {
            background-color: #3498db;
        }

        QLabel {
            color: #f0f0f0;
        }

        QTableWidget {
            background-color: #ffffff;
            border: 1px solid #ddd;
            color: #000000;
        }

        QLineEdit, QSpinBox {
            background-color: #ffffff;
            border: 1px solid #ccc;
            border-radius: 4px;
            padding: 4px;
            color: #000000;
        }

        QCheckBox {
            color: #f0f0f0;
        }
   QStringList{
        font-size: 14px;
        padding 40px;
        background-color: rgb(0, 81, 121);
        color: white; border: 1px;
     border-radius: 5px;

        }
    )";
}


QWidget* Dashboard::createStudentManagementWidget()
{
    QWidget *widget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(widget);

    QLabel *title = new QLabel("Student Management", widget);
    title->setAlignment(Qt::AlignCenter);
    title->setStyleSheet("font-weight: bold; font-size: 24px; margin-bottom: 20px;");

    QTableWidget *studentTable = new QTableWidget(0, 5, widget);
    studentTable->setHorizontalHeaderLabels({"ID", "Name", "Program", "Year", "GPA"});
    studentTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    studentTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    studentTable->insertRow(0);
    studentTable->setItem(0, 0, new QTableWidgetItem("1001"));
    studentTable->setItem(0, 1, new QTableWidgetItem("Poniso"));
    studentTable->setItem(0, 2, new QTableWidgetItem("Computer Science"));
    studentTable->setItem(0, 3, new QTableWidgetItem("Senior"));
    studentTable->setItem(0, 4, new QTableWidgetItem("3.8"));

    layout->addWidget(title);
    layout->addWidget(studentTable);
    return widget;
}

QWidget* Dashboard::createCourseManagementWidget()
{
    QWidget *widget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(widget);

    QLabel *title = new QLabel("Lusaka Business & Technical College Current Courses", widget);
    title->setAlignment(Qt::AlignCenter);
    title->setStyleSheet("font-weight: bold; font-size: 24px; margin-bottom: 20px;");

    QTableWidget *courseTable = new QTableWidget(0, 4, widget);
    courseTable->setHorizontalHeaderLabels({"Department", "Code", "CourseName", "Total Subject"});
    courseTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    courseTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    courseTable->insertRow(0);
    courseTable->setItem(0, 0, new QTableWidgetItem("Business"));
    courseTable->setItem(0, 1, new QTableWidgetItem("DCS"));
    courseTable->setItem(0, 2, new QTableWidgetItem("Diploma in Computer Studies"));
    courseTable->setItem(0, 3, new QTableWidgetItem("5"));

    layout->addWidget(title);
    layout->addWidget(courseTable);
    return widget;
}

QWidget* Dashboard::createReportWidget()
{
    QWidget *widget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(widget);

    QLabel *title = new QLabel("Reports & Analytics", widget);
    title->setAlignment(Qt::AlignCenter);
    title->setStyleSheet("font-weight: bold; font-size: 24px; margin-bottom: 20px;");

    QListWidget *reportList = new QListWidget(widget);
    reportList->addItem("Student Enrollment Statistics");
    reportList->addItem("Course Completion Rates");
    reportList->addItem("Department Performance");
    reportList->addItem("Graduation Project Analysis");
    reportList->addItem("Financial Reports");

    layout->addWidget(title);
    layout->addWidget(reportList);
    return widget;
}

QWidget* Dashboard::createSettingsWidget()
{
    QWidget *widget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(widget);

    QLabel *title = new QLabel("System Settings", widget);
    title->setAlignment(Qt::AlignCenter);
    title->setStyleSheet("font-weight: bold; font-size: 24px; margin-bottom: 20px;");

    QFormLayout *formLayout = new QFormLayout();

    QLineEdit *adminEmail = new QLineEdit(widget);
    adminEmail->setPlaceholderText("admin@college.edu");
    formLayout->addRow("Admin Email:", adminEmail);

    QSpinBox *dataRetention = new QSpinBox(widget);
    dataRetention->setRange(1, 10);
    dataRetention->setValue(5);
    formLayout->addRow("Data Retention (years):", dataRetention);

    QCheckBox *backupEnabled = new QCheckBox("Enable Automatic Backups", widget);
    backupEnabled->setChecked(true);
    formLayout->addRow("", backupEnabled); // Empty label for alignment

    QPushButton *saveBtn = new QPushButton("Save Settings", widget);
    saveBtn->setMinimumHeight(35);

    layout->addWidget(title);
    layout->addLayout(formLayout);
    layout->addWidget(saveBtn);
    layout->addStretch();

    return widget;
}
void Dashboard::viewStudents() {
    QMessageBox::information(this, "View Students", "Viewing all students...");
}

void Dashboard::registerStudent() {
    QMessageBox::information(this, "Register Student", "Register a new student...");
}

void Dashboard::manageData() {
    QMessageBox::information(this, "Manage Data", "Manage system data...");
}

void Dashboard::logout() {
    QApplication::quit();
}
