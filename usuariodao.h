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

    bool conectar();


private:
    QSqlDatabase db;
};

#endif
