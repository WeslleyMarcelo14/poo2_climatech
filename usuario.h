#ifndef USUARIO_H
#define USUARIO_H

#include <QString>

class Usuario
{
public:
    Usuario();

    Usuario(const QString &nome, const QString &email, const QString &senha);

    QString getNome() const;
    QString getEmail() const;
    QString getSenha() const;

    void setNome(const QString &nome);
    void setEmail(const QString &email);
    void setSenha(const QString &senha);

private:
    QString nome;
    QString email;
    QString senha;
};

#endif
