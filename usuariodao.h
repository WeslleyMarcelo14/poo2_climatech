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

    bool conectar();

private:
    QSqlDatabase db;
};

#endif // USUARIODAO_H
