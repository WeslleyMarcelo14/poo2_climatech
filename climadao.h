#ifndef CLIMADAO_H
#define CLIMADAO_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QString>
#include "clima.h"

class ClimaDAO
{
public:
    ClimaDAO();

    ~ClimaDAO();

    bool inserirClima(const Clima &clima);

    bool conectar();

private:
    QSqlDatabase db;
};

#endif
