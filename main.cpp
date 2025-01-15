#include "mainwindow.h"
#include "registerwindow.h"
#include "loginwindow.h"
#include "usuariodao.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    registerwindow registroWindow;
    registroWindow.show();

    loginwindow loginwindow;
    loginwindow.show();
    //MainWindow w;
    //w.show();

    return a.exec();
}
