/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginwindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_email_2;
    QLineEdit *lineEdit_emaillogin;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_senha_2;
    QLineEdit *lineEdit_loginsenha;
    QPushButton *pushButton_login;
    QLabel *label_login;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *loginwindow)
    {
        if (loginwindow->objectName().isEmpty())
            loginwindow->setObjectName("loginwindow");
        loginwindow->resize(800, 600);
        centralwidget = new QWidget(loginwindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(160, 110, 431, 331));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_email_2 = new QLabel(layoutWidget);
        label_email_2->setObjectName("label_email_2");

        horizontalLayout_5->addWidget(label_email_2);

        lineEdit_emaillogin = new QLineEdit(layoutWidget);
        lineEdit_emaillogin->setObjectName("lineEdit_emaillogin");

        horizontalLayout_5->addWidget(lineEdit_emaillogin);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_senha_2 = new QLabel(layoutWidget);
        label_senha_2->setObjectName("label_senha_2");

        horizontalLayout_6->addWidget(label_senha_2);

        lineEdit_loginsenha = new QLineEdit(layoutWidget);
        lineEdit_loginsenha->setObjectName("lineEdit_loginsenha");
        lineEdit_loginsenha->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_6->addWidget(lineEdit_loginsenha);


        verticalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout_3->addLayout(verticalLayout_4);

        pushButton_login = new QPushButton(layoutWidget);
        pushButton_login->setObjectName("pushButton_login");

        verticalLayout_3->addWidget(pushButton_login);

        label_login = new QLabel(centralwidget);
        label_login->setObjectName("label_login");
        label_login->setGeometry(QRect(200, 50, 341, 71));
        loginwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(loginwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        loginwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(loginwindow);
        statusbar->setObjectName("statusbar");
        loginwindow->setStatusBar(statusbar);

        retranslateUi(loginwindow);

        QMetaObject::connectSlotsByName(loginwindow);
    } // setupUi

    void retranslateUi(QMainWindow *loginwindow)
    {
        loginwindow->setWindowTitle(QCoreApplication::translate("loginwindow", "MainWindow", nullptr));
        label_email_2->setText(QCoreApplication::translate("loginwindow", "E-mail: ", nullptr));
        label_senha_2->setText(QCoreApplication::translate("loginwindow", "Senha: ", nullptr));
        pushButton_login->setText(QCoreApplication::translate("loginwindow", "Login", nullptr));
        label_login->setText(QCoreApplication::translate("loginwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt;\">Tela de Login</span></p><p align=\"center\"><span style=\" font-size:26pt;\"/></p><h2 align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:26pt; font-weight:700;\"><br/></h2></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginwindow: public Ui_loginwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
