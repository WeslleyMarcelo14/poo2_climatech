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
