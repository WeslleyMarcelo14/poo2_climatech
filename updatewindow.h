#ifndef UPDATEWINDOW_H
#define UPDATEWINDOW_H

#include <QMainWindow>
#include "usuariodao.h"

namespace Ui {
class UpdateWindow;
}

class UpdateWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UpdateWindow(QWidget *parent = nullptr);
    ~UpdateWindow();

private slots:
    void on_AlterarButton_clicked();

    void on_CancelarButton_clicked();

private:
    Ui::UpdateWindow *ui;
    UsuarioDAO usuarioDAO;
};

#endif // UPDATEWINDOW_H
