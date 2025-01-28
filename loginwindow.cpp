#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QMessageBox>
#include "usuariodao.h"


loginwindow::loginwindow(QWidget *parent, MainWindow *mainWindow)
    : QMainWindow(parent)
    , ui(new Ui::loginwindow), mainWindow(mainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Tela de Login");
}

loginwindow::~loginwindow()
{
    delete ui;
}

void loginwindow::on_pushButton_login_clicked()
{
    QString email = ui->lineEdit_emaillogin->text();
    QString senha = ui->lineEdit_loginsenha->text();

    if (email.isEmpty() || senha.isEmpty()) {
        QMessageBox::warning(this, "Erro", "Por favor, preencha todos os campos.");
        return;
    }

    UsuarioDAO usuarioDao;

    if (!usuarioDao.conectar()) {
        QMessageBox::warning(this, "Erro", "Não foi possível conectar ao banco de dados.");
        return;
    }

    if (usuarioDao.validarLogin(email, senha)) {
        QString nome = usuarioDao.getNomeUsuario();
        QMessageBox::information(this, "Login realizado com sucesso\n", "Bem-vindo, " + nome + "!!");
        if (mainWindow) {
            qDebug() << "entrou aqui: " << nome;
            mainWindow->setNomeUsuario(nome);
        }

        this->close();
    } else {
        QMessageBox::warning(this, "Erro", "Usuário não encontrado ou dados incorretos.");
    }

}

