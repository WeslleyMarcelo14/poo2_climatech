#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H

#include <QMainWindow>
#include "usuariodao.h"

namespace Ui {
class registerwindow;
}

class registerwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit registerwindow(QWidget *parent = nullptr);
    ~registerwindow();

private slots:
    void on_pushButton_registro_clicked();

    void on_pushButton_irparalogin_clicked();

private:
    Ui::registerwindow *ui;
    UsuarioDAO usuarioDAO;
};

#endif
