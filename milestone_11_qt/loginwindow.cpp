#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>

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

bool checkIfQStringIsInFile(const QString& qString, const QString& fileName) {
  QFile file(fileName);
  if (!file.open(QIODevice::ReadOnly)) {
    return false;
  }
  QTextStream stream(&file);

  QString nextLine;
  while (!stream.atEnd()) {
    nextLine = stream.readLine();

    if (nextLine == qString) {
      return true;
    }
  }

  // The QString is not in the file.
  return false;
}

void loginWindow::on_pushButton_Login_clicked()
{
    QString username = ui-> lineEdit_UsernameLogin->text();
    QString password = ui-> lineEdit_PasswordLogin->text();
    QString full_data = username + "," + password;
    QString filename = "F:/software/Software-Project/milestone_11_qt/data.txt";

    if (checkIfQStringIsInFile(full_data,filename)){
        QMessageBox::information(this, "login", "logged in succesfully");
    }
    else
        QMessageBox::warning(this, "login", "wrong username or password");

}

