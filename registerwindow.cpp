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


