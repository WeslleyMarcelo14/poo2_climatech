#include "mainwindow.h"
#include "registerwindow.h"
#include "usuariodao.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // registerwindow registroWindow;
    // registroWindow.show();

    MainWindow w;
    w.show();

    return a.exec();
}
