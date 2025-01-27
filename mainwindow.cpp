#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include "clima.h"
#include "climadao.h"
#include "configuracoes.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    config = new Configuracoes(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setNomeUsuario(const QString &nome){
    ui->label_nomeUsuario->setText(nome);
    ui->label_nomeUsuario->setStyleSheet("font-size: 20px; font-weight: bold; color: white;");
}

void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    QString apiKey, cidade;
    apiKey = "105972183771f39cefd44db42ada6c8e";
    cidade = arg1;
    qDebug() << cidade;
    QString url = QString("http://api.openweathermap.org/data/2.5/weather?q=%1&appid=%2").arg(cidade).arg(apiKey);
    qDebug() << url;

    manager = new QNetworkAccessManager(this);
    QNetworkRequest request((QUrl(url)));
    reply = manager->get(request);

    connect(reply, &QNetworkReply::finished, this, &MainWindow::onWeatherDataReceived);

    if(!reply){
        qDebug() << "Erro na conxão" << reply->errorString();
        return;
    }
}

void MainWindow::onWeatherDataReceived() {
    if (reply->error() != QNetworkReply::NoError) {
        qDebug() << "Erro na requisição: " << reply->errorString();
        reply->deleteLater();
        return;
    }

    QByteArray response_data = reply->readAll();
    qDebug() << "Resposta da API:" << response_data;

    QJsonDocument jsonDoc = QJsonDocument::fromJson(response_data);

    if (!jsonDoc.isObject()) {
        qDebug() << "Erro: a resposta não é um objeto JSON válido.";
        reply->deleteLater();
        return;
    }

    QJsonObject jsonObj = jsonDoc.object();

    // Obtenção do nome da cidade
    QString cidade = jsonObj["name"].toString();

    QJsonObject mainObj = jsonObj["main"].toObject();
    double temperatura = mainObj["temp"].toDouble() - 273.15;
    double sensTermica = mainObj["feels_like"].toDouble() - 273.15;
    double tempMin = mainObj["temp_min"].toDouble() - 273.15;
    double tempMax = mainObj["temp_max"].toDouble() - 273.15;
    double umidade = mainObj["humidity"].toDouble();

    QJsonObject ventObj = jsonObj["wind"].toObject();
    double velVento = ventObj["speed"].toDouble();

    // Atualizar widgets da interface

    qDebug() << "Valor de configtemp:" << config->configtemp;

    if(config->configtemp == "°C"){
        ui->label_temperaturaAtual->setText(QString::number(temperatura, 'f', 1) + " °C");
        ui->label_sensacaoTermica->setText(QString::number(sensTermica, 'f', 1) + " °C");
        ui->label_tempMin->setText(QString::number(tempMin, 'f', 1) + " °C");
        ui->label_tempMax->setText(QString::number(tempMax, 'f', 1) + " °C");

    }
    else if(config->configtemp == "°F"){
        temperatura = 1.8*temperatura + 32;
        sensTermica = 1.8*sensTermica + 32;
        tempMin = 1.8*tempMin + 32;
        tempMax = 1.8*tempMax + 32;
        ui->label_temperaturaAtual->setText(QString::number(temperatura, 'f', 1) + " °F");
        ui->label_sensacaoTermica->setText(QString::number(sensTermica, 'f', 1) + " °F");
        ui->label_tempMin->setText(QString::number(tempMin, 'f', 1) + " °F");
        ui->label_tempMax->setText(QString::number(tempMax, 'f', 1) + " °F");
    }
    else if(config->configtemp == "K"){
        temperatura = temperatura + 273.15;
        sensTermica = sensTermica + 273.15;
        tempMin = tempMin + 273.15;
        tempMax = tempMax + 273.15;
        ui->label_temperaturaAtual->setText(QString::number(temperatura, 'f', 1) + " K");
        ui->label_sensacaoTermica->setText(QString::number(sensTermica, 'f', 1) + " K");
        ui->label_tempMin->setText(QString::number(tempMin, 'f', 1) + " K");
        ui->label_tempMax->setText(QString::number(tempMax, 'f', 1) + " K");
    }
    else{
        qDebug() << "Valor de configtemp não corresponde a nenhuma unidade conhecida.";
    }

    ui->label_umidade->setText(QString::number(umidade, 'f', 0) + " %");
    ui->label_velocidadeVento->setText(QString::number(velVento, 'f', 1) + " m/s");

    // Opcional: exibir o nome da cidade no título da janela
    this->setWindowTitle("Clima - " + cidade);

    reply->deleteLater();
}

void MainWindow::on_loginButton_clicked()
{
    log = new loginwindow(this, this);
    log->show();
}


void MainWindow::on_regisButton_clicked()
{
    regis = new registerwindow(this);
    regis->show();
}


void MainWindow::on_configButton_clicked()
{
    config->show();
}


void MainWindow::on_UpdateButton_clicked()
{
    update = new UpdateWindow(this);
    update->show();
}


void MainWindow::on_DeleteButton_clicked()
{
    del = new DeleteWindow(this);
    del->show();
}

