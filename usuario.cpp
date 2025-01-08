#include "usuario.h"

Usuario::Usuario() {
    nome = "";
    email = "";
    senha = "";
}

// Construtor com parâmetros
Usuario::Usuario(const QString &nome, const QString &email, const QString &senha)
    : nome(nome), email(email), senha(senha)
{
}

// Métodos getters
QString Usuario::getNome() const {
    return nome;
}

QString Usuario::getEmail() const {
    return email;
}

QString Usuario::getSenha() const {
    return senha;
}

// Métodos setters
void Usuario::setNome(const QString &nome) {
    this->nome = nome;
}

void Usuario::setEmail(const QString &email) {
    this->email = email;
}

void Usuario::setSenha(const QString &senha) {
    this->senha = senha;
}
