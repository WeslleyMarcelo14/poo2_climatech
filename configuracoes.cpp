#include "configuracoes.h"
#include "ui_configuracoes.h"

Configuracoes::Configuracoes(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Configuracoes)
{
    ui->setupUi(this);
}

Configuracoes::~Configuracoes()
{
    delete ui;
}


void Configuracoes::on_Box_unidade_currentTextChanged(const QString &arg1)
{

    configtemp = arg1;
    qDebug() << "Configtemp atualizado para:" << configtemp;

}

