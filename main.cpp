#include "mainwindow.h"
#include "registerwindow.h"
#include "usuariodao.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    registerwindow registroWindow;
    registroWindow.show();

    // MainWindow w;  // Se você quiser exibir a tela principal após o registro, descomente esta linha
    // w.show();

    return a.exec();
}
