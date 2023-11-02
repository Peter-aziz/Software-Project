#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_mainwindow_clicked()
{
    hide();
    loginwindow_p = new loginWindow(this);
    loginwindow_p->show();
}


void MainWindow::on_Signup_mainwindow_clicked()
{
    hide();
    signupwindow_p = new signupwindow(this);
    signupwindow_p->show();
}

