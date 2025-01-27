#ifndef USUARIODAO_H
#define USUARIODAO_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QString>
#include "usuario.h"

class UsuarioDAO
{
public:
    UsuarioDAO();

    ~UsuarioDAO();

    bool inserirUsuario(const Usuario &usuario);

    bool validarLogin(const QString usuario, const QString login);

    bool atualizarSenha(const Usuario &usuario);

    bool removerUsuario(const Usuario &usuario);

    bool conectar();

    QString getNomeUsuario();


private:
    QSqlDatabase db;
    QString nomeUsuario;
    //Usuario user;
};

#endif
