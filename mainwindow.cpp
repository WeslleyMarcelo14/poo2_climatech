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

    // Obtenção do nome da cidade da API
    QString cidade = jsonObj["name"].toString();  // Extraindo o nome da cidade
    qDebug() << "Cidade: " << cidade;

    QJsonObject mainObj = jsonObj["main"].toObject();
    double temperatura = mainObj["temp"].toDouble();
    temperatura -= 273.15; // Convertendo para Celsius

    double sensTermica = mainObj["feels_like"].toDouble();
    sensTermica -= 273.15;  // Convertendo para Celsius

    double tempMin = mainObj["temp_min"].toDouble();
    double tempMax = mainObj["temp_max"].toDouble();
    tempMin -= 273.15;  // Convertendo para Celsius
    tempMax -= 273.15;  // Convertendo para Celsius

    double umidade = mainObj["humidity"].toDouble();

    QJsonObject ventObj = jsonObj["wind"].toObject();
    double velVento = ventObj["speed"].toDouble();
    double dirVento = ventObj["deg"].toDouble();

    qDebug() << "Temperatura em Celsius:" << temperatura;
    qDebug() << "Sensação térmica em Celsius:" << sensTermica;
    qDebug() << "Temperatura mínima em Celsius:" << tempMin;
    qDebug() << "Temperatura máxima em Celsius:" << tempMax;
    qDebug() << "Umidade:" << umidade;
    qDebug() << "Velocidade do vento:" << velVento << "m/s";
    qDebug() << "Direção do vento:" << dirVento << "graus";

    Clima clima(temperatura, sensTermica, tempMin, tempMax, umidade, velVento, dirVento, cidade);

    ClimaDAO climaDAO;
    if (climaDAO.inserirClima(clima)) {
        QMessageBox::information(this, "Sucesso", "Clima registrado com sucesso!");
    } else {
        QMessageBox::critical(this, "Erro", "Erro ao registrar clima.");
    }

    reply->deleteLater();
}


