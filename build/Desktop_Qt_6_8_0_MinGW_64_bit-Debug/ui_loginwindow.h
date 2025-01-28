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
#include <QtWidgets/QPushButton>
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
    QLabel *label;

    void setupUi(QMainWindow *loginwindow)
    {
        if (loginwindow->objectName().isEmpty())
            loginwindow->setObjectName("loginwindow");
        loginwindow->resize(495, 396);
        loginwindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(loginwindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 120, 321, 201));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_email_2 = new QLabel(layoutWidget);
        label_email_2->setObjectName("label_email_2");
        label_email_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(label_email_2);

        lineEdit_emaillogin = new QLineEdit(layoutWidget);
        lineEdit_emaillogin->setObjectName("lineEdit_emaillogin");
        lineEdit_emaillogin->setStyleSheet(QString::fromUtf8("background-color: rgb(164, 249, 203);\n"
"border-radius: 2px;\n"
"color:black;"));

        horizontalLayout_5->addWidget(lineEdit_emaillogin);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_senha_2 = new QLabel(layoutWidget);
        label_senha_2->setObjectName("label_senha_2");
        label_senha_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(label_senha_2);

        lineEdit_loginsenha = new QLineEdit(layoutWidget);
        lineEdit_loginsenha->setObjectName("lineEdit_loginsenha");
        lineEdit_loginsenha->setStyleSheet(QString::fromUtf8("background-color: rgb(164, 249, 203);\n"
"border-radius: 2px;\n"
"color:black;"));
        lineEdit_loginsenha->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_6->addWidget(lineEdit_loginsenha);


        verticalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout_3->addLayout(verticalLayout_4);

        pushButton_login = new QPushButton(layoutWidget);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(pushButton_login);

        label_login = new QLabel(centralwidget);
        label_login->setObjectName("label_login");
        label_login->setGeometry(QRect(90, 60, 341, 71));
        label_login->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 30, 91, 111));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resource/resource/logo.png")));
        label->setScaledContents(true);
        loginwindow->setCentralWidget(centralwidget);

        retranslateUi(loginwindow);

        QMetaObject::connectSlotsByName(loginwindow);
    } // setupUi

    void retranslateUi(QMainWindow *loginwindow)
    {
        loginwindow->setWindowTitle(QCoreApplication::translate("loginwindow", "MainWindow", nullptr));
        label_email_2->setText(QCoreApplication::translate("loginwindow", "E-mail: ", nullptr));
        label_senha_2->setText(QCoreApplication::translate("loginwindow", "Senha: ", nullptr));
        pushButton_login->setText(QCoreApplication::translate("loginwindow", "Login", nullptr));
        label_login->setText(QCoreApplication::translate("loginwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; font-weight:700;\">Login</span></p><p align=\"center\"><span style=\" font-size:26pt; font-weight:700;\"><br/></span></p><h2 align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:26pt; font-weight:700;\"><br/></h2></body></html>", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loginwindow: public Ui_loginwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
