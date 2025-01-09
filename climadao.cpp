#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QString>
#include "climadao.h"

ClimaDAO::ClimaDAO() {
    db = QSqlDatabase::addDatabase("QPSQL");
}

ClimaDAO::~ClimaDAO(){
    if(db.isOpen()){
        db.close();
    }
}

bool ClimaDAO::conectar() {
    db.setHostName("localhost");
    db.setPort(5432);
    db.setDatabaseName("postgres");
    db.setUserName("postgres");
    db.setPassword("postgres");

    if (db.open()) {
        qDebug() << "Conexão com o banco de dados estabelecida!";
        return true;
    } else {
        qDebug() << "Erro ao conectar ao banco de dados:" << db.lastError().text();
        return false;
    }
}

bool ClimaDAO::inserirClima(const Clima &clima) {
    if (!db.isOpen() && !conectar()) {
        return false;
    }

    QSqlQuery query;

    query.prepare("INSERT INTO public.clima (temperatura, \"sensTermica\", \"tempMin\", \"tempMax\", umidade, \"velVento\", \"dirVento\", cidade) "
                  "VALUES (:temperatura, :sensTermica, :tempMin, :tempMax, :umidade, :velVento, :dirVento, :cidade)");

    query.bindValue(":temperatura", clima.getTemperatura());
    query.bindValue(":sensTermica", clima.getSensTermica());
    query.bindValue(":tempMin", clima.getTempMin());
    query.bindValue(":tempMax", clima.getTempMax());
    query.bindValue(":umidade", clima.getUmidade());
    query.bindValue(":velVento", clima.getVelVento());
    query.bindValue(":dirVento", clima.getDirVento());
    query.bindValue(":cidade", clima.getCidade());

    if (query.exec()) {
        qDebug() << "Clima inserido com sucesso!";
        return true;
    } else {
        qDebug() << "Erro ao inserir clima:" << query.lastError().text();
        return false;
    }
}
