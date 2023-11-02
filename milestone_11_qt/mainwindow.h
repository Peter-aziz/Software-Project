#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "loginwindow.h"
#include "signupwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_login_mainwindow_clicked();

    void on_Signup_mainwindow_clicked();

private:
    Ui::MainWindow *ui;
    loginWindow * loginwindow_p;
    signupwindow * signupwindow_p;
};
#endif // MAINWINDOW_H
