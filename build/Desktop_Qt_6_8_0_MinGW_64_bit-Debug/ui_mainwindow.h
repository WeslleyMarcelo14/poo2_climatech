/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame_aplicacao;
    QLabel *label_temperaturaAtual;
    QLabel *label_tempatual;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_valoressec;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_sensacao;
    QLabel *label_sensacaoTermica;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_sensmax;
    QLabel *label_tempMax;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_sensmin;
    QLabel *label_tempMin;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_vento;
    QLabel *label_velocidadeVento;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_humidade;
    QLabel *label_umidade;
    QFrame *frame_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_localizacao;
    QComboBox *comboBox;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *regisButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *configButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 500);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame_aplicacao = new QFrame(centralwidget);
        frame_aplicacao->setObjectName("frame_aplicacao");
        frame_aplicacao->setGeometry(QRect(20, 170, 761, 231));
        frame_aplicacao->setFrameShape(QFrame::Shape::StyledPanel);
        frame_aplicacao->setFrameShadow(QFrame::Shadow::Raised);
        label_temperaturaAtual = new QLabel(frame_aplicacao);
        label_temperaturaAtual->setObjectName("label_temperaturaAtual");
        label_temperaturaAtual->setGeometry(QRect(60, 40, 171, 91));
        label_temperaturaAtual->setStyleSheet(QString::fromUtf8("font-size: 30px;        /* Tamanho do texto */\n"
"font-weight: bold;      /* Negrito */\n"
"color: #fff;         /* Cor do texto */"));
        label_tempatual = new QLabel(frame_aplicacao);
        label_tempatual->setObjectName("label_tempatual");
        label_tempatual->setGeometry(QRect(70, 10, 151, 18));
        layoutWidget = new QWidget(frame_aplicacao);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 140, 611, 97));
        horizontalLayout_valoressec = new QHBoxLayout(layoutWidget);
        horizontalLayout_valoressec->setObjectName("horizontalLayout_valoressec");
        horizontalLayout_valoressec->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_sensacao = new QLabel(layoutWidget);
        label_sensacao->setObjectName("label_sensacao");

        horizontalLayout_2->addWidget(label_sensacao);

        label_sensacaoTermica = new QLabel(layoutWidget);
        label_sensacaoTermica->setObjectName("label_sensacaoTermica");

        horizontalLayout_2->addWidget(label_sensacaoTermica);


        horizontalLayout_valoressec->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_sensmax = new QLabel(layoutWidget);
        label_sensmax->setObjectName("label_sensmax");

        horizontalLayout_3->addWidget(label_sensmax);

        label_tempMax = new QLabel(layoutWidget);
        label_tempMax->setObjectName("label_tempMax");

        horizontalLayout_3->addWidget(label_tempMax);


        horizontalLayout_valoressec->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_sensmin = new QLabel(layoutWidget);
        label_sensmin->setObjectName("label_sensmin");

        horizontalLayout_4->addWidget(label_sensmin);

        label_tempMin = new QLabel(layoutWidget);
        label_tempMin->setObjectName("label_tempMin");

        horizontalLayout_4->addWidget(label_tempMin);


        horizontalLayout_valoressec->addLayout(horizontalLayout_4);

        layoutWidget1 = new QWidget(frame_aplicacao);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(390, 50, 221, 53));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_vento = new QLabel(layoutWidget1);
        label_vento->setObjectName("label_vento");

        horizontalLayout_6->addWidget(label_vento);

        label_velocidadeVento = new QLabel(layoutWidget1);
        label_velocidadeVento->setObjectName("label_velocidadeVento");

        horizontalLayout_6->addWidget(label_velocidadeVento);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_humidade = new QLabel(layoutWidget1);
        label_humidade->setObjectName("label_humidade");

        horizontalLayout_7->addWidget(label_humidade);

        label_umidade = new QLabel(layoutWidget1);
        label_umidade->setObjectName("label_umidade");

        horizontalLayout_7->addWidget(label_umidade);


        verticalLayout_2->addLayout(horizontalLayout_7);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(20, 90, 761, 71));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        layoutWidget2 = new QWidget(frame_2);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 10, 411, 76));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_localizacao = new QLabel(layoutWidget2);
        label_localizacao->setObjectName("label_localizacao");

        horizontalLayout->addWidget(label_localizacao);

        comboBox = new QComboBox(layoutWidget2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(20, 40, 381, 31));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        loginButton = new QPushButton(layoutWidget3);
        loginButton->setObjectName("loginButton");

        horizontalLayout_5->addWidget(loginButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        regisButton = new QPushButton(layoutWidget3);
        regisButton->setObjectName("regisButton");

        horizontalLayout_5->addWidget(regisButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        configButton = new QPushButton(layoutWidget3);
        configButton->setObjectName("configButton");

        horizontalLayout_5->addWidget(configButton);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_temperaturaAtual->setText(QCoreApplication::translate("MainWindow", "     --\302\260C", nullptr));
        label_tempatual->setText(QCoreApplication::translate("MainWindow", "Temperatura Atual", nullptr));
        label_sensacao->setText(QCoreApplication::translate("MainWindow", "Sensa\303\247\303\243o T\303\251rmica: ", nullptr));
        label_sensacaoTermica->setText(QCoreApplication::translate("MainWindow", "--", nullptr));
        label_sensmax->setText(QCoreApplication::translate("MainWindow", "M\303\241x: ", nullptr));
        label_tempMax->setText(QCoreApplication::translate("MainWindow", "--", nullptr));
        label_sensmin->setText(QCoreApplication::translate("MainWindow", "Min: ", nullptr));
        label_tempMin->setText(QCoreApplication::translate("MainWindow", "--", nullptr));
        label_vento->setText(QCoreApplication::translate("MainWindow", "Vento: ", nullptr));
        label_velocidadeVento->setText(QCoreApplication::translate("MainWindow", "--", nullptr));
        label_humidade->setText(QCoreApplication::translate("MainWindow", "Umidade: ", nullptr));
        label_umidade->setText(QCoreApplication::translate("MainWindow", "--", nullptr));
        label_localizacao->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Localiza\303\247\303\243o: </span></p><h2 align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:700;\"><br/></h2></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Selecione", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "------------------", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Apucarana", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Campo Mour\303\243o", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Corn\303\251lio Proc\303\263pio", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "Curitiba", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "Dois Vizinhos", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("MainWindow", "Francisco Beltr\303\243o", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("MainWindow", "Guarapuava", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("MainWindow", "Londrina", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("MainWindow", "Medianeira", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("MainWindow", "Pato Branco", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("MainWindow", "Ponta Grossa", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("MainWindow", "Santa Helena", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("MainWindow", "Toledo", nullptr));
        comboBox->setItemText(15, QString());

        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        regisButton->setText(QCoreApplication::translate("MainWindow", "Registro", nullptr));
        configButton->setText(QCoreApplication::translate("MainWindow", "Config", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
