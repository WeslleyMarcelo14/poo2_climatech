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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateWindow
{
public:
    QWidget *centralwidget;
    QPushButton *CancelarButton;
    QLabel *label_5;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_nome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_email;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_novasenha;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_cnovasenha;
    QSpacerItem *verticalSpacer;
    QPushButton *AlterarButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UpdateWindow)
    {
        if (UpdateWindow->objectName().isEmpty())
            UpdateWindow->setObjectName("UpdateWindow");
        UpdateWindow->resize(800, 600);
        centralwidget = new QWidget(UpdateWindow);
        centralwidget->setObjectName("centralwidget");
        CancelarButton = new QPushButton(centralwidget);
        CancelarButton->setObjectName("CancelarButton");
        CancelarButton->setGeometry(QRect(340, 480, 91, 31));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(240, 60, 311, 81));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(110, 190, 551, 231));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_nome = new QLineEdit(widget);
        lineEdit_nome->setObjectName("lineEdit_nome");

        horizontalLayout->addWidget(lineEdit_nome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_email = new QLineEdit(widget);
        lineEdit_email->setObjectName("lineEdit_email");

        horizontalLayout_2->addWidget(lineEdit_email);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit_novasenha = new QLineEdit(widget);
        lineEdit_novasenha->setObjectName("lineEdit_novasenha");

        horizontalLayout_3->addWidget(lineEdit_novasenha);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        lineEdit_cnovasenha = new QLineEdit(widget);
        lineEdit_cnovasenha->setObjectName("lineEdit_cnovasenha");

        horizontalLayout_4->addWidget(lineEdit_cnovasenha);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        AlterarButton = new QPushButton(widget);
        AlterarButton->setObjectName("AlterarButton");

        verticalLayout_2->addWidget(AlterarButton);

        UpdateWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UpdateWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        UpdateWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(UpdateWindow);
        statusbar->setObjectName("statusbar");
        UpdateWindow->setStatusBar(statusbar);

        retranslateUi(UpdateWindow);

        QMetaObject::connectSlotsByName(UpdateWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UpdateWindow)
    {
        UpdateWindow->setWindowTitle(QCoreApplication::translate("UpdateWindow", "MainWindow", nullptr));
        CancelarButton->setText(QCoreApplication::translate("UpdateWindow", "Cancelar", nullptr));
        label_5->setText(QCoreApplication::translate("UpdateWindow", "<h1>Tela de Alterar Senha<\\h1>", nullptr));
        label->setText(QCoreApplication::translate("UpdateWindow", "                           Nome: ", nullptr));
        label_2->setText(QCoreApplication::translate("UpdateWindow", "                            Email: ", nullptr));
        label_3->setText(QCoreApplication::translate("UpdateWindow", "                  Nova Senha: ", nullptr));
        label_4->setText(QCoreApplication::translate("UpdateWindow", "Confirmar Nova Senha: ", nullptr));
        AlterarButton->setText(QCoreApplication::translate("UpdateWindow", "Alterar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateWindow: public Ui_UpdateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEWINDOW_H
