#include "usuariodao.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>

// Construtor
UsuarioDAO::UsuarioDAO() {
    db = QSqlDatabase::addDatabase("QPSQL");
}

// Destruidor
UsuarioDAO::~UsuarioDAO() {
    if (db.isOpen()) {
        db.close();
    }
}

bool UsuarioDAO::conectar() {
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

bool UsuarioDAO::inserirUsuario(const Usuario &usuario) {
    if (!db.isOpen() && !conectar()) {
        return false;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO usuario (nome, email, senha) VALUES (:nome, :email, :senha)");

    query.bindValue(":nome", usuario.getNome());
    query.bindValue(":email", usuario.getEmail());
    query.bindValue(":senha", usuario.getSenha());

    if (query.exec()) {
        qDebug() << "Usuário inserido com sucesso!";
        return true;
    } else {
        qDebug() << "Erro ao inserir usuário:" << query.lastError().text();
        return false;
    }
}


