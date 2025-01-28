/********************************************************************************
** Form generated from reading UI file 'updatewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEWINDOW_H
#define UI_UPDATEWINDOW_H

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

class Ui_UpdateWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_login;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_email_3;
    QLineEdit *lineEdit_nome;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_email;
    QLineEdit *lineEdit_novaSenha;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_senha;
    QLineEdit *lineEdit_cnovaSenha;
    QPushButton *AlterarButton;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UpdateWindow)
    {
        if (UpdateWindow->objectName().isEmpty())
            UpdateWindow->setObjectName("UpdateWindow");
        UpdateWindow->resize(496, 396);
        centralwidget = new QWidget(UpdateWindow);
        centralwidget->setObjectName("centralwidget");
        label_login = new QLabel(centralwidget);
        label_login->setObjectName("label_login");
        label_login->setGeometry(QRect(90, 40, 341, 71));
        label_login->setStyleSheet(QString::fromUtf8(""));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(60, 110, 371, 201));
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

        lineEdit_novaSenha = new QLineEdit(layoutWidget_2);
        lineEdit_novaSenha->setObjectName("lineEdit_novaSenha");
        lineEdit_novaSenha->setStyleSheet(QString::fromUtf8("background-color: rgb(164, 249, 203);\n"
"border-radius: 2px;\n"
"color:black;"));
        lineEdit_novaSenha->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_7->addWidget(lineEdit_novaSenha);


        verticalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_senha = new QLabel(layoutWidget_2);
        label_senha->setObjectName("label_senha");
        label_senha->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_8->addWidget(label_senha);

        lineEdit_cnovaSenha = new QLineEdit(layoutWidget_2);
        lineEdit_cnovaSenha->setObjectName("lineEdit_cnovaSenha");
        lineEdit_cnovaSenha->setStyleSheet(QString::fromUtf8("background-color: rgb(164, 249, 203);\n"
"border-radius: 2px;\n"
"color:black;"));
        lineEdit_cnovaSenha->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_8->addWidget(lineEdit_cnovaSenha);


        verticalLayout_6->addLayout(horizontalLayout_8);


        verticalLayout_5->addLayout(verticalLayout_6);

        AlterarButton = new QPushButton(layoutWidget_2);
        AlterarButton->setObjectName("AlterarButton");
        AlterarButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_5->addWidget(AlterarButton);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 30, 91, 111));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resource/resource/logo.png")));
        label->setScaledContents(true);
        UpdateWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(UpdateWindow);
        statusbar->setObjectName("statusbar");
        UpdateWindow->setStatusBar(statusbar);

        retranslateUi(UpdateWindow);

        QMetaObject::connectSlotsByName(UpdateWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UpdateWindow)
    {
        UpdateWindow->setWindowTitle(QCoreApplication::translate("UpdateWindow", "MainWindow", nullptr));
        label_login->setText(QCoreApplication::translate("UpdateWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; font-weight:700;\">Alterar</span></p></body></html>", nullptr));
        label_email_3->setText(QCoreApplication::translate("UpdateWindow", "E-mail:           ", nullptr));
        label_email->setText(QCoreApplication::translate("UpdateWindow", "Nova Senha:", nullptr));
        label_senha->setText(QCoreApplication::translate("UpdateWindow", "Conf. Senha:", nullptr));
        lineEdit_cnovaSenha->setText(QString());
        AlterarButton->setText(QCoreApplication::translate("UpdateWindow", "Alterar Senha", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UpdateWindow: public Ui_UpdateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEWINDOW_H
