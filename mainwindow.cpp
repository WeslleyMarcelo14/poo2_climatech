#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

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

    QJsonObject mainObj = jsonObj["main"].toObject();
    double temperatura = mainObj["temp"].toDouble();

    // Convertendo a temperatura para Celsius
    temperatura = temperatura - 273.15;

    // Obtendo a sensação térmica
    double sensTermica = mainObj["feels_like"].toDouble();  // Sensação térmica em Kelvin
    sensTermica -= 273.15;  // Convertendo para Celsius

    // Obtendo a temperatura mínima e máxima
    double temp_min = mainObj["temp_min"].toDouble();  // Temperatura mínima em Kelvin
    double temp_max = mainObj["temp_max"].toDouble();  // Temperatura máxima em Kelvin

    temp_min = temp_min - 273.15;  // Convertendo para Celsius
    temp_max = temp_max - 273.15;  // Convertendo para Celsius

    qDebug() << "Temperatura em Celsius:" << temperatura;
    qDebug() << "Sensação térmica em Celsius:" << sensTermica;
    qDebug() << "Temperatura mínima em Celsius:" << temp_min;
    qDebug() << "Temperatura máxima em Celsius:" << temp_max;

    double umidade = mainObj["humidity"].toDouble();
    qDebug() << "Umidade:" << umidade;

    QJsonObject ventObj = jsonObj["wind"].toObject();
    double velVento = ventObj["speed"].toDouble();
    double dirVento = ventObj["deg"].toDouble();

    qDebug() << "Velocidade do vento:" << velVento << "m/s";
    qDebug() << "Direção do vento:" << dirVento << "graus";

    reply->deleteLater();
}

