#ifndef DELETEWINDOW_H
#define DELETEWINDOW_H

#include <QMainWindow>
#include "usuariodao.h"

namespace Ui {
class DeleteWindow;
}

class DeleteWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeleteWindow(QWidget *parent = nullptr);
    ~DeleteWindow();

private slots:
    void on_deletarButton_clicked();

    void on_cancelarButton_clicked();

private:
    Ui::DeleteWindow *ui;
    UsuarioDAO usuarioDAO;
};

#endif // DELETEWINDOW_H
