#include "useraddmin.h"
#include <QMessageBox>

UserAddmin::UserAddmin(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle("Login");
    resize(400, 250);  // Increase dialog size

    // Create input widgets
    usernameLineEdit = new QLineEdit(this);
    passwordLineEdit = new QLineEdit(this);
    roleComboBox = new QComboBox(this);

    // Configure widgets
    passwordLineEdit->setEchoMode(QLineEdit::Password);
    roleComboBox->addItems({"Admin", "Student"});

    usernameLineEdit->setMinimumHeight(30);
    passwordLineEdit->setMinimumHeight(30);
    roleComboBox->setMinimumHeight(30);

    submitButton = new QPushButton("Submit", this);
    resetButton = new QPushButton("Reset", this);

    submitButton->setStyleSheet("background-color: #2980b9; color: white; padding: 6px;");
    resetButton->setStyleSheet("background-color: #7f8c8d; color: white; padding: 6px;");

    // Layout setup
    QFormLayout *formLayout = new QFormLayout;
    formLayout->addRow("Username:", usernameLineEdit);
    formLayout->addRow("Password:", passwordLineEdit);
    formLayout->addRow("Role:", roleComboBox);

    QHBoxLayout *buttonLayout = new QHBoxLayout;
    buttonLayout->addWidget(submitButton);
    buttonLayout->addWidget(resetButton);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addLayout(formLayout);
    mainLayout->addLayout(buttonLayout);

    // Signal-slot connections
    connect(submitButton, &QPushButton::clicked, this, &UserAddmin::handleSubmit);
    connect(resetButton, &QPushButton::clicked, this, &UserAddmin::handleReset);
}

void UserAddmin::handleSubmit()
{
    QString username = usernameLineEdit->text();
    QString password = passwordLineEdit->text();
    QString role = roleComboBox->currentText();

    if (username.isEmpty() || password.isEmpty() || role.isEmpty()) {
        QMessageBox::warning(this, "Missing Info", "Please fill in all fields.");
        return;
    }

    QMessageBox::information(this, "Login Info",
                             "Username: " + username + "\nRole: " + role);
}

void UserAddmin::handleReset()
{
    usernameLineEdit->clear();
    passwordLineEdit->clear();
    roleComboBox->setCurrentIndex(0);
}
