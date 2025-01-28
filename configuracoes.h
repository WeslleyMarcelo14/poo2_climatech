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

    // Getter para configtemp
    QString getConfigTemp() const;

    // Setter para configtemp
    void setConfigTemp(const QString &value);

private slots:

    void on_Box_unidade_currentTextChanged(const QString &arg1);

private:
    Ui::Configuracoes *ui;
    QString configtemp;
};

#endif // CONFIGURACOES_H
