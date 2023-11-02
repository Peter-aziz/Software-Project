#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>
#include <QFile>
#include <vector>

loginWindow::loginWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginWindow)
{
    ui->setupUi(this);
}

loginWindow::~loginWindow()
{
    delete ui;
}

static void process_line(const QByteArray &)
{
}

static void process_line(const QString &)
{
}

void loginWindow::on_pushButton_Login_clicked()
{
    QString username = ui-> lineEdit_UsernameLogin->text();
    QString password = ui-> lineEdit_PasswordLogin->text();

    vector <string> passwords;

    QFile input_file("F:/software/milestone_11_qt/data.txt");

    QTextStream in(&input_file);
    QString line = in.readLine();
    while (!line.isNull()) {
            process_line(line);
            line = in.readLine();
        }
}
/*
    if (username== "admin" && password == "admin"){
        QMessageBox::information(this, "Login", "Username and password are correct");
    }
    else{
        QMessageBox::warning(this, "Login", "Username or password are not correct. Try again");
    }
*/


