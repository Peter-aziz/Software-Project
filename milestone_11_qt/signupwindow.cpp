#include "signupwindow.h"
#include "ui_signupwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

signupwindow::signupwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signupwindow)
{
    ui->setupUi(this);
}

signupwindow::~signupwindow()
{
    delete ui;
}

void signupwindow::on_pushButton_signup_clicked()
{
    QString username = ui-> lineEdit_UsernameSignup->text();
    QString password = ui-> lineEdit_PasswordSignup->text();
    QString deviceCode = ui-> lineEdit_DeviceCodeSignup->text();

    QFile file("F:/software/milestone_11_qt/data.txt");
    QTextStream out(&file);

    if (deviceCode == "1111" && username != "" && password != ""){
        //create a new user
        if (file.open(QIODevice::ReadWrite | QIODevice::Append)) {
            out << "\n" << username << "," << password ;
        }
        file.close();
        // return to main
        this->hide();
        QWidget *parent = this->parentWidget();
        parent->show();

    }
    else{
        QMessageBox::warning(this, "signup", "Device code not correct. Try again");
    }
}


