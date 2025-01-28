#include "updatewindow.h"
#include "ui_updatewindow.h"
#include <QMessageBox>
#include <usuariodao.h>

UpdateWindow::UpdateWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UpdateWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Tela de Alterar Senha");
}

UpdateWindow::~UpdateWindow()
{
    delete ui;
}

void UpdateWindow::on_AlterarButton_clicked()
{
    QString email = ui->lineEdit_email->text();
    QString novaSenha = ui->lineEdit_novaSenha->text();
    QString cnovaSenha = ui->lineEdit_cnovaSenha->text();

    if (email.isEmpty() || novaSenha.isEmpty()) {
        QMessageBox::warning(this, "Erro", "Por favor, preencha todos os campos.");
        return;
    }

    if (novaSenha != cnovaSenha){
        QMessageBox::warning(this, "Erro", "Confirme novamente a senha");
        return;
    }

    Usuario usuario;
    usuario.setEmail(email);
    usuario.setSenha(novaSenha);

    if (usuarioDAO.atualizarSenha(usuario)) {
        QMessageBox::information(this, "Sucesso", "Senha atualizada com sucesso!");
        ui->lineEdit_novaSenha->clear();
        ui->lineEdit_cnovaSenha->clear();
    } else {
        QMessageBox::critical(this, "Erro", "Erro ao atualizar a senha. Verifique os dados e tente novamente.");
    }
}


void UpdateWindow::on_CancelarButton_clicked()
{
    this->close();
}

