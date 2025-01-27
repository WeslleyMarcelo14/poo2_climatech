#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "mainwindow.h"
#include "loginwindow.h"

class MainWindow;

namespace Ui {
class loginwindow;
}

class loginwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit loginwindow(QWidget *parent = nullptr, MainWindow *mainWindow = nullptr);
    ~loginwindow();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::loginwindow *ui;
    MainWindow *mainWindow;
};

#endif // LOGINWINDOW_H
