#include "configuracoes.h"
#include "ui_configuracoes.h"

Configuracoes::Configuracoes(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Configuracoes),
    configtemp("Celsius - °C")
{
    ui->setupUi(this);

    this->setWindowTitle("Tela de Configurações");


}


Configuracoes::~Configuracoes()
{
    delete ui;
}


// Getter
QString Configuracoes::getConfigTemp() const
{
    return configtemp;
}

// Setter
void Configuracoes::setConfigTemp(const QString &value)
{
    configtemp = value;
}

// Slot para alteração do QComboBox
void Configuracoes::on_Box_unidade_currentTextChanged(const QString &arg1)
{
    setConfigTemp(arg1); // Atualiza usando o setter
    qDebug() << "Configtemp atualizado para:" << getConfigTemp();
}
