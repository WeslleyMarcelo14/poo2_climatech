#include "usuariodao.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>

UsuarioDAO::UsuarioDAO() {
    db = QSqlDatabase::addDatabase("QPSQL");
}

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

bool UsuarioDAO::validarLogin(const QString email, const QString senha){
    if(!db.open() && !conectar()){
        return false;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM usuario WHERE email = :email AND senha = :senha");
    query.bindValue(":email", email);
    query.bindValue(":senha", senha);

    if(query.exec()){
        if(query.next()){ // Verifica se encontrou um resultado
            QString nomeUsuario = query.value("nome").toString(); // Armazena o nome do usuário
            qDebug() << "Usuário autenticado com sucesso. Nome:" << nomeUsuario;
            return true;
        } else {
            qDebug() << "Usuário ou senha incorretos";
            return false;
        }
    }else{
        qDebug() << "Erro ao verificar usuário" << query.lastError().text();
        return false;
    }
    return false;
}

bool UsuarioDAO::atualizarSenha(const Usuario &usuario){
    if(!db.isOpen() && !conectar()){
        return false;
    }

    QSqlQuery query;

    query.prepare("UPDATE usuario SET senha = :senha WHERE email = :email");

    query.bindValue(":senha", usuario.getSenha());
    query.bindValue(":email", usuario.getEmail());

    if(query.exec()){
        qDebug() << "Senha Atualizada com sucesso";
        return true;
    } else{
        qDebug() << "Erro ao atualizar a senha:" << query.lastError().text();
        return false;
    }
}

bool UsuarioDAO::removerUsuario(const Usuario &usuario){
    if(!db.isOpen() && !conectar()){
        return false;
    }

    QSqlQuery query;

    query.prepare("DELETE FROM usuario WHERE email = :email AND senha = :senha");

    query.bindValue(":email", usuario.getEmail());
    query.bindValue(":senha", usuario.getSenha());

    if(query.exec()){
        qDebug() << "Usuário removido com sucesso";
        return true;
    } else{
        qDebug() << "Erro ao remover usuário:" << query.lastError().text();
        return false;
    }
}



