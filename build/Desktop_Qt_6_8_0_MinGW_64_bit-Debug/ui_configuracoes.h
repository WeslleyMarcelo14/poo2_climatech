/********************************************************************************
** Form generated from reading UI file 'configuracoes.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURACOES_H
#define UI_CONFIGURACOES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Configuracoes
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QComboBox *comboBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Configuracoes)
    {
        if (Configuracoes->objectName().isEmpty())
            Configuracoes->setObjectName("Configuracoes");
        Configuracoes->resize(800, 600);
        centralwidget = new QWidget(Configuracoes);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 10, 221, 71));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(120, 300, 114, 88));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        radioButton = new QRadioButton(widget);
        radioButton->setObjectName("radioButton");

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName("radioButton_2");

        verticalLayout->addWidget(radioButton_2);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(470, 310, 131, 81));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget1);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);

        radioButton_3 = new QRadioButton(widget1);
        radioButton_3->setObjectName("radioButton_3");

        verticalLayout_2->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(widget1);
        radioButton_4->setObjectName("radioButton_4");

        verticalLayout_2->addWidget(radioButton_4);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(490, 130, 91, 61));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        comboBox_2 = new QComboBox(widget2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        verticalLayout_3->addWidget(comboBox_2);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(120, 130, 111, 61));
        verticalLayout_4 = new QVBoxLayout(widget3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget3);
        label_2->setObjectName("label_2");

        verticalLayout_4->addWidget(label_2);

        comboBox = new QComboBox(widget3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        verticalLayout_4->addWidget(comboBox);

        Configuracoes->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Configuracoes);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Configuracoes->setMenuBar(menubar);
        statusbar = new QStatusBar(Configuracoes);
        statusbar->setObjectName("statusbar");
        Configuracoes->setStatusBar(statusbar);

        retranslateUi(Configuracoes);

        QMetaObject::connectSlotsByName(Configuracoes);
    } // setupUi

    void retranslateUi(QMainWindow *Configuracoes)
    {
        Configuracoes->setWindowTitle(QCoreApplication::translate("Configuracoes", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Configuracoes", "<h1>Configura\303\247\303\265es", nullptr));
        label_4->setText(QCoreApplication::translate("Configuracoes", "Tema", nullptr));
        radioButton->setText(QCoreApplication::translate("Configuracoes", "Claro", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Configuracoes", "Escuro", nullptr));
        label_5->setText(QCoreApplication::translate("Configuracoes", "Notifica\303\247\303\265es", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Configuracoes", "Permitir", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Configuracoes", "N\303\243o Permitir", nullptr));
        label_3->setText(QCoreApplication::translate("Configuracoes", "Unidade", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Configuracoes", "\302\260C", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Configuracoes", "\302\260F", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("Configuracoes", "K", nullptr));

        label_2->setText(QCoreApplication::translate("Configuracoes", "Idioma", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Configuracoes", "Portugu\303\252s", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Configuracoes", "Ingl\303\252s", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Configuracoes", "Espanhol", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Configuracoes: public Ui_Configuracoes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURACOES_H
