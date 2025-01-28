/********************************************************************************
** Form generated from reading UI file 'deletewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEWINDOW_H
#define UI_DELETEWINDOW_H

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

class Ui_DeleteWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_icon;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_email_2;
    QLineEdit *lineEdit_email;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_senha_2;
    QLineEdit *lineEdit_senha;
    QPushButton *deletarButton;

    void setupUi(QMainWindow *DeleteWindow)
    {
        if (DeleteWindow->objectName().isEmpty())
            DeleteWindow->setObjectName("DeleteWindow");
        DeleteWindow->resize(496, 396);
        centralwidget = new QWidget(DeleteWindow);
        centralwidget->setObjectName("centralwidget");
        label_icon = new QLabel(centralwidget);
        label_icon->setObjectName("label_icon");
        label_icon->setGeometry(QRect(90, 60, 341, 71));
        label_icon->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 30, 91, 111));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resource/resource/logo.png")));
        label->setScaledContents(true);
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

        lineEdit_email = new QLineEdit(layoutWidget);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setStyleSheet(QString::fromUtf8("background-color: rgb(164, 249, 203);\n"
"border-radius: 2px;\n"
"color:black;"));

        horizontalLayout_5->addWidget(lineEdit_email);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_senha_2 = new QLabel(layoutWidget);
        label_senha_2->setObjectName("label_senha_2");
        label_senha_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(label_senha_2);

        lineEdit_senha = new QLineEdit(layoutWidget);
        lineEdit_senha->setObjectName("lineEdit_senha");
        lineEdit_senha->setStyleSheet(QString::fromUtf8("background-color: rgb(164, 249, 203);\n"
"border-radius: 2px;\n"
"color:black;"));
        lineEdit_senha->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_6->addWidget(lineEdit_senha);


        verticalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout_3->addLayout(verticalLayout_4);

        deletarButton = new QPushButton(layoutWidget);
        deletarButton->setObjectName("deletarButton");
        deletarButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(deletarButton);

        DeleteWindow->setCentralWidget(centralwidget);

        retranslateUi(DeleteWindow);

        QMetaObject::connectSlotsByName(DeleteWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DeleteWindow)
    {
        DeleteWindow->setWindowTitle(QCoreApplication::translate("DeleteWindow", "MainWindow", nullptr));
        label_icon->setText(QCoreApplication::translate("DeleteWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; font-weight:700;\">Deletar</span></p><p align=\"center\"><span style=\" font-size:26pt; font-weight:700;\"><br/></span></p><h2 align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:26pt; font-weight:700;\"><br/></h2></body></html>", nullptr));
        label->setText(QString());
        label_email_2->setText(QCoreApplication::translate("DeleteWindow", "E-mail: ", nullptr));
        label_senha_2->setText(QCoreApplication::translate("DeleteWindow", "Senha: ", nullptr));
        deletarButton->setText(QCoreApplication::translate("DeleteWindow", "Deletar Usu\303\241rio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteWindow: public Ui_DeleteWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEWINDOW_H
