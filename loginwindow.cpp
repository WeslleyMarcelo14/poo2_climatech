#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>
#include "usuariodao.h"

loginwindow::loginwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginwindow)
{
    ui->setupUi(this);
}

loginwindow::~loginwindow()
{
    delete ui;
}

void loginwindow::on_pushButton_login_clicked()
{
    QString email = ui->lineEdit_emaillogin->text();
    QString senha = ui->lineEdit_loginsenha->text();

    if(email.isEmpty() || senha.isEmpty()){
        QMessageBox::warning(this, "Erro", "Por favor, preencha todos os campos.");
        return;
    }
    UsuarioDAO usuarioDao;

    if(!usuarioDao.conectar()){
        QMessageBox::warning(this, "Erro", "Não foi possivel conectar ao BD.");
        return;
    }
    if(usuarioDao.validarLogin(email, senha)){
        QMessageBox::warning(this, "Sucesso", "Login realizado com sucesso.");
    } else{
        QMessageBox::warning(this, "Erro", "Usuário ou Senha incorretos.");
    }
}

