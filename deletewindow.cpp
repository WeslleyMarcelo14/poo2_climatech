#include "deletewindow.h"
#include "ui_deletewindow.h"
#include <QMessageBox>
#include <usuariodao.h>

DeleteWindow::DeleteWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DeleteWindow)
{
    ui->setupUi(this);
}

DeleteWindow::~DeleteWindow()
{
    delete ui;
}


void DeleteWindow::on_deletarButton_clicked()
{
    // Obtendo os campos da interface
    QString nome = ui->lineEdit_nome->text();
    QString email = ui->lineEdit_email->text();
    QString senha = ui->lineEdit_senha->text();

    // Verificando se os campos estão preenchidos
    if (nome.isEmpty() ||email.isEmpty() || senha.isEmpty()) {
        QMessageBox::warning(this, "Erro", "Por favor, preencha todos os campos.");
        return;
    }

    // Criando um objeto Usuario com os dados fornecidos
    Usuario usuario;
    usuario.setNome(nome);
    usuario.setEmail(email);
    usuario.setSenha(senha); // Caso use hash, aplique a função aqui, ex: `usuario.setSenha(gerarHashSenha(novaSenha));`

    // Chamando a função de atualização no DAO
    if (usuarioDAO.removerUsuario(usuario)) {
        QMessageBox::information(this, "Sucesso", "Usuario deletado com sucesso!");
        ui->lineEdit_nome->clear();
        ui->lineEdit_email->clear();
        ui->lineEdit_senha->clear();
    } else {
        QMessageBox::critical(this, "Erro", "Erro ao deletar usuario. Verifique os dados e tente novamente.");
    }
}


void DeleteWindow::on_cancelarButton_clicked()
{
    this->close();
}

