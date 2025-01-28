#include "deletewindow.h"
#include "ui_deletewindow.h"
#include <QMessageBox>
#include <usuariodao.h>

DeleteWindow::DeleteWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DeleteWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Tela de Deletar Usuário");
}

DeleteWindow::~DeleteWindow()
{
    delete ui;
}


void DeleteWindow::on_deletarButton_clicked()
{
    QString email = ui->lineEdit_email->text();
    QString senha = ui->lineEdit_senha->text();

    if (email.isEmpty() || senha.isEmpty()) {
        QMessageBox::warning(this, "Erro", "Por favor, preencha todos os campos.");
        return;
    }

    Usuario usuario;
    usuario.setEmail(email);
    usuario.setSenha(senha);

    if (usuarioDAO.removerUsuario(usuario)) {
        QMessageBox::information(this, "Sucesso", "Usuario deletado com sucesso!");
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

