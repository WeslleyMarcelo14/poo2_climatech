#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include "mainwindow.h"
#include "loginwindow.h"
#include "registerwindow.h"
#include "configuracoes.h"
#include "updatewindow.h"
#include "deletewindow.h"

class loginwindow;
class registerwindow;

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

    void setNomeUsuario(const QString &nome);

    double temperatura, sensTermica, tempMin, tempMax, umidade, velVento;
    QString cidade;

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
