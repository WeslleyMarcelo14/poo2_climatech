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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QComboBox *Box_unidade;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Configuracoes)
    {
        if (Configuracoes->objectName().isEmpty())
            Configuracoes->setObjectName("Configuracoes");
        Configuracoes->resize(671, 397);
        centralwidget = new QWidget(Configuracoes);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 10, 221, 71));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(100, 90, 471, 211));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout_4->addWidget(label_2);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        verticalLayout_4->addWidget(comboBox);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        Box_unidade = new QComboBox(layoutWidget);
        Box_unidade->addItem(QString());
        Box_unidade->addItem(QString());
        Box_unidade->addItem(QString());
        Box_unidade->setObjectName("Box_unidade");

        verticalLayout_3->addWidget(Box_unidade);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName("radioButton");

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName("radioButton_2");

        verticalLayout->addWidget(radioButton_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);

        radioButton_3 = new QRadioButton(layoutWidget);
        radioButton_3->setObjectName("radioButton_3");

        verticalLayout_2->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(layoutWidget);
        radioButton_4->setObjectName("radioButton_4");

        verticalLayout_2->addWidget(radioButton_4);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout);

        Configuracoes->setCentralWidget(centralwidget);
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
        label_2->setText(QCoreApplication::translate("Configuracoes", "Idioma", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Configuracoes", "Portugu\303\252s", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Configuracoes", "Ingl\303\252s", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Configuracoes", "Espanhol", nullptr));

        label_3->setText(QCoreApplication::translate("Configuracoes", "Unidade", nullptr));
        Box_unidade->setItemText(0, QCoreApplication::translate("Configuracoes", "Celsius - \302\260C", nullptr));
        Box_unidade->setItemText(1, QCoreApplication::translate("Configuracoes", "Fahrenheit - \302\260F", nullptr));
        Box_unidade->setItemText(2, QCoreApplication::translate("Configuracoes", "Kelvin - K", nullptr));

        label_4->setText(QCoreApplication::translate("Configuracoes", "Tema", nullptr));
        radioButton->setText(QCoreApplication::translate("Configuracoes", "Claro", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Configuracoes", "Escuro", nullptr));
        label_5->setText(QCoreApplication::translate("Configuracoes", "Notifica\303\247\303\265es", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Configuracoes", "Permitir", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Configuracoes", "N\303\243o Permitir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Configuracoes: public Ui_Configuracoes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURACOES_H
