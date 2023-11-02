#ifndef SIGNUPWINDOW_H
#define SIGNUPWINDOW_H

#include <QDialog>
#include <QFile>
#include <QTextStream>

namespace Ui {
class signupwindow;
}

class signupwindow : public QDialog
{
    Q_OBJECT

public:
    explicit signupwindow(QWidget *parent = nullptr);
    ~signupwindow();

private slots:
    void on_pushButton_signup_clicked();

private:
    Ui::signupwindow *ui;
};

#endif // SIGNUPWINDOW_H
