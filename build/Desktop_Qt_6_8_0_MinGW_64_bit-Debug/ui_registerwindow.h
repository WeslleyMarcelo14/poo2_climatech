/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registerwindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_irparalogin;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_email_3;
    QLineEdit *lineEdit_nome;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_email;
    QLineEdit *lineEdit_email;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_senha;
    QLineEdit *lineEdit_senha;
    QPushButton *pushButton_registro;
    QLabel *label_login;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *registerwindow)
    {
        if (registerwindow->objectName().isEmpty())
            registerwindow->setObjectName("registerwindow");
        registerwindow->resize(495, 396);
        centralwidget = new QWidget(registerwindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_irparalogin = new QPushButton(centralwidget);
        pushButton_irparalogin->setObjectName("pushButton_irparalogin");
        pushButton_irparalogin->setGeometry(QRect(100, 300, 277, 26));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(80, 90, 321, 201));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_email_3 = new QLabel(layoutWidget_2);
        label_email_3->setObjectName("label_email_3");
        label_email_3->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(label_email_3);

        lineEdit_nome = new QLineEdit(layoutWidget_2);
        lineEdit_nome->setObjectName("lineEdit_nome");
        lineEdit_nome->setStyleSheet(QString::fromUtf8("background-color: rgb(164, 249, 203);\n"
"border-radius: 2px;\n"
"color:black;"));

        horizontalLayout_2->addWidget(lineEdit_nome);


        verticalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_email = new QLabel(layoutWidget_2);
        label_email->setObjectName("label_email");
        label_email->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_7->addWidget(label_email);

        lineEdit_email = new QLineEdit(layoutWidget_2);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setStyleSheet(QString::fromUtf8("background-color: rgb(164, 249, 203);\n"
"border-radius: 2px;\n"
"color:black;"));

        horizontalLayout_7->addWidget(lineEdit_email);


        verticalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_senha = new QLabel(layoutWidget_2);
        label_senha->setObjectName("label_senha");
        label_senha->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_8->addWidget(label_senha);

        lineEdit_senha = new QLineEdit(layoutWidget_2);
        lineEdit_senha->setObjectName("lineEdit_senha");
        lineEdit_senha->setStyleSheet(QString::fromUtf8("background-color: rgb(164, 249, 203);\n"
"border-radius: 2px;\n"
"color:black;"));
        lineEdit_senha->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_8->addWidget(lineEdit_senha);


        verticalLayout_6->addLayout(horizontalLayout_8);


        verticalLayout_5->addLayout(verticalLayout_6);

        pushButton_registro = new QPushButton(layoutWidget_2);
        pushButton_registro->setObjectName("pushButton_registro");
        pushButton_registro->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_5->addWidget(pushButton_registro);

        label_login = new QLabel(centralwidget);
        label_login->setObjectName("label_login");
        label_login->setGeometry(QRect(90, 20, 341, 71));
        label_login->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 10, 91, 111));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resource/resource/logo.png")));
        label->setScaledContents(true);
        registerwindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(registerwindow);
        statusbar->setObjectName("statusbar");
        registerwindow->setStatusBar(statusbar);

        retranslateUi(registerwindow);

        QMetaObject::connectSlotsByName(registerwindow);
    } // setupUi

    void retranslateUi(QMainWindow *registerwindow)
    {
        registerwindow->setWindowTitle(QCoreApplication::translate("registerwindow", "MainWindow", nullptr));
        pushButton_irparalogin->setText(QCoreApplication::translate("registerwindow", "Ir para Login", nullptr));
        label_email_3->setText(QCoreApplication::translate("registerwindow", "Nome: ", nullptr));
        label_email->setText(QCoreApplication::translate("registerwindow", "E-mail: ", nullptr));
        label_senha->setText(QCoreApplication::translate("registerwindow", "Senha: ", nullptr));
        lineEdit_senha->setText(QString());
        pushButton_registro->setText(QCoreApplication::translate("registerwindow", "Registrar", nullptr));
        label_login->setText(QCoreApplication::translate("registerwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; font-weight:700;\">Registro</span></p></body></html>", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class registerwindow: public Ui_registerwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
