#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include "loginwindow.h"
#include "registerwindow.h"
#include "configuracoes.h"
#include "updatewindow.h"
#include "deletewindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);
    void onWeatherDataReceived();

    void on_loginButton_clicked();

    void on_regisButton_clicked();

    void on_configButton_clicked();

    void on_UpdateButton_clicked();

    void on_DeleteButton_clicked();

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    loginwindow *log;
    registerwindow *regis;
    Configuracoes *config;
    UpdateWindow *update;
    DeleteWindow *del;
};
#endif
