#include "registerwindow.h"
#include "ui_registerwindow.h"
#include <QMessageBox>
#include <usuariodao.h>

registerwindow::registerwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::registerwindow)
{
    ui->setupUi(this);
}

registerwindow::~registerwindow()
{
    delete ui;
}

void registerwindow::on_pushButton_registro_clicked()
{
    QString nome = ui->lineEdit_nome->text();
    QString email = ui->lineEdit_email->text();
    QString senha = ui->lineEdit_senha->text();

    if (nome.isEmpty() || email.isEmpty() || senha.isEmpty()) {
        QMessageBox::warning(this, "Erro", "Por favor, preencha todos os campos.");
        return;
    }

    Usuario novoUsuario(nome, email, senha);

    if (usuarioDAO.inserirUsuario(novoUsuario)) {
        QMessageBox::information(this, "Sucesso", "Usuário registrado com sucesso!");
    } else {
        QMessageBox::critical(this, "Erro", "Erro ao registrar usuário.");
    }
}

void registerwindow::on_pushButton_irparalogin_clicked()
{
    logw = new loginwindow(this);
    logw->show();
}


void registerwindow::on_UpdateButton_clicked()
{
    // Obtendo os campos da interface
    QString nome = ui->lineEdit_nome->text();
    QString email = ui->lineEdit_email->text();
    QString novaSenha = ui->lineEdit_senha->text();

    // Verificando se os campos estão preenchidos
    if (nome.isEmpty() ||email.isEmpty() || novaSenha.isEmpty()) {
        QMessageBox::warning(this, "Erro", "Por favor, preencha todos os campos.");
        return;
    }

    // Criando um objeto Usuario com os dados fornecidos
    Usuario usuario;
    usuario.setNome(nome);
    usuario.setEmail(email);
    usuario.setSenha(novaSenha); // Caso use hash, aplique a função aqui, ex: `usuario.setSenha(gerarHashSenha(novaSenha));`

    // Chamando a função de atualização no DAO
    if (usuarioDAO.atualizarSenha(usuario)) {
        QMessageBox::information(this, "Sucesso", "Senha atualizada com sucesso!");
    } else {
        QMessageBox::critical(this, "Erro", "Erro ao atualizar a senha. Verifique os dados e tente novamente.");
    }
}





void registerwindow::on_DeleteButton_clicked()
{
    // Obtendo os campos da interface
    QString nome = ui->lineEdit_nome->text();
    QString email = ui->lineEdit_email->text();
    QString novaSenha = ui->lineEdit_senha->text();

    // Verificando se os campos estão preenchidos
    if (nome.isEmpty() ||email.isEmpty() || novaSenha.isEmpty()) {
        QMessageBox::warning(this, "Erro", "Por favor, preencha todos os campos.");
        return;
    }

    // Criando um objeto Usuario com os dados fornecidos
    Usuario usuario;
    usuario.setNome(nome);
    usuario.setEmail(email);
    usuario.setSenha(novaSenha); // Caso use hash, aplique a função aqui, ex: `usuario.setSenha(gerarHashSenha(novaSenha));`

    // Chamando a função de atualização no DAO
    if (usuarioDAO.removerUsuario(usuario)) {
        QMessageBox::information(this, "Sucesso", "Usuario deletado com sucesso!");
    } else {
        QMessageBox::critical(this, "Erro", "Erro ao deletar usuario. Verifique os dados e tente novamente.");
    }
}

