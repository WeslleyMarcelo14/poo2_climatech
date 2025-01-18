#ifndef CONFIGURACOES_H
#define CONFIGURACOES_H

#include <QMainWindow>

namespace Ui {
class Configuracoes;
}

class Configuracoes : public QMainWindow
{
    Q_OBJECT

public:
    explicit Configuracoes(QWidget *parent = nullptr);
    ~Configuracoes();

private:
    Ui::Configuracoes *ui;
};

#endif // CONFIGURACOES_H
