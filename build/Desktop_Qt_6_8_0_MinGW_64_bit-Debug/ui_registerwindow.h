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
#include <QtWidgets/QMenuBar>
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_nome;
    QLineEdit *lineEdit_nome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_email;
    QLineEdit *lineEdit_email;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_senha;
    QLineEdit *lineEdit_senha;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_registro;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *registerwindow)
    {
        if (registerwindow->objectName().isEmpty())
            registerwindow->setObjectName("registerwindow");
        registerwindow->resize(800, 600);
        centralwidget = new QWidget(registerwindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_irparalogin = new QPushButton(centralwidget);
        pushButton_irparalogin->setObjectName("pushButton_irparalogin");
        pushButton_irparalogin->setGeometry(QRect(290, 490, 235, 26));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(160, 0, 481, 421));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout_3->addWidget(label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_nome = new QLabel(layoutWidget);
        label_nome->setObjectName("label_nome");

        horizontalLayout->addWidget(label_nome);

        lineEdit_nome = new QLineEdit(layoutWidget);
        lineEdit_nome->setObjectName("lineEdit_nome");

        horizontalLayout->addWidget(lineEdit_nome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_email = new QLabel(layoutWidget);
        label_email->setObjectName("label_email");

        horizontalLayout_2->addWidget(label_email);

        lineEdit_email = new QLineEdit(layoutWidget);
        lineEdit_email->setObjectName("lineEdit_email");

        horizontalLayout_2->addWidget(lineEdit_email);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_senha = new QLabel(layoutWidget);
        label_senha->setObjectName("label_senha");

        horizontalLayout_3->addWidget(label_senha);

        lineEdit_senha = new QLineEdit(layoutWidget);
        lineEdit_senha->setObjectName("lineEdit_senha");

        horizontalLayout_3->addWidget(lineEdit_senha);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_registro = new QPushButton(layoutWidget);
        pushButton_registro->setObjectName("pushButton_registro");

        horizontalLayout_4->addWidget(pushButton_registro);


        verticalLayout_3->addLayout(horizontalLayout_4);

        registerwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(registerwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        registerwindow->setMenuBar(menubar);
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
        label->setText(QCoreApplication::translate("registerwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt;\">Tela de Registro </span></p><h2 align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:26pt; font-weight:700;\"><br/></h2></body></html>", nullptr));
        label_nome->setText(QCoreApplication::translate("registerwindow", "Nome: ", nullptr));
        label_email->setText(QCoreApplication::translate("registerwindow", "E-mail: ", nullptr));
        label_senha->setText(QCoreApplication::translate("registerwindow", "Senha: ", nullptr));
        pushButton_registro->setText(QCoreApplication::translate("registerwindow", "Registrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerwindow: public Ui_registerwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
