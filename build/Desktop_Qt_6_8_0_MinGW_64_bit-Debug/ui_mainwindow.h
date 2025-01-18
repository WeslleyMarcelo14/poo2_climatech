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
    QLabel *label_clima;
    QLabel *label_tempatual;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_valoressec;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_senstermica;
    QLabel *label_senstermicaval;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_sensmax;
    QLabel *label_sensmaxvalor;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_sensmin;
    QLabel *label_sensminvalor;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_vento;
    QLabel *label_ventovalor;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_humidade;
    QLabel *label_humidadevalor;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QLabel *label_4;
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
        label_clima = new QLabel(frame_aplicacao);
        label_clima->setObjectName("label_clima");
        label_clima->setGeometry(QRect(30, 40, 91, 91));
        label_tempatual = new QLabel(frame_aplicacao);
        label_tempatual->setObjectName("label_tempatual");
        label_tempatual->setGeometry(QRect(20, 20, 151, 18));
        layoutWidget = new QWidget(frame_aplicacao);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 140, 611, 97));
        horizontalLayout_valoressec = new QHBoxLayout(layoutWidget);
        horizontalLayout_valoressec->setObjectName("horizontalLayout_valoressec");
        horizontalLayout_valoressec->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_senstermica = new QLabel(layoutWidget);
        label_senstermica->setObjectName("label_senstermica");

        horizontalLayout_2->addWidget(label_senstermica);

        label_senstermicaval = new QLabel(layoutWidget);
        label_senstermicaval->setObjectName("label_senstermicaval");

        horizontalLayout_2->addWidget(label_senstermicaval);


        horizontalLayout_valoressec->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_sensmax = new QLabel(layoutWidget);
        label_sensmax->setObjectName("label_sensmax");

        horizontalLayout_3->addWidget(label_sensmax);

        label_sensmaxvalor = new QLabel(layoutWidget);
        label_sensmaxvalor->setObjectName("label_sensmaxvalor");

        horizontalLayout_3->addWidget(label_sensmaxvalor);


        horizontalLayout_valoressec->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_sensmin = new QLabel(layoutWidget);
        label_sensmin->setObjectName("label_sensmin");

        horizontalLayout_4->addWidget(label_sensmin);

        label_sensminvalor = new QLabel(layoutWidget);
        label_sensminvalor->setObjectName("label_sensminvalor");

        horizontalLayout_4->addWidget(label_sensminvalor);


        horizontalLayout_valoressec->addLayout(horizontalLayout_4);

        layoutWidget1 = new QWidget(frame_aplicacao);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(190, 60, 221, 53));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_vento = new QLabel(layoutWidget1);
        label_vento->setObjectName("label_vento");

        horizontalLayout_6->addWidget(label_vento);

        label_ventovalor = new QLabel(layoutWidget1);
        label_ventovalor->setObjectName("label_ventovalor");

        horizontalLayout_6->addWidget(label_ventovalor);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_humidade = new QLabel(layoutWidget1);
        label_humidade->setObjectName("label_humidade");

        horizontalLayout_7->addWidget(label_humidade);

        label_humidadevalor = new QLabel(layoutWidget1);
        label_humidadevalor->setObjectName("label_humidadevalor");

        horizontalLayout_7->addWidget(label_humidadevalor);


        verticalLayout_2->addLayout(horizontalLayout_7);

        widget = new QWidget(frame_aplicacao);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(110, 60, 48, 61));
        horizontalLayout_8 = new QHBoxLayout(widget);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_8->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout_8->addWidget(label_4);

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
        label_clima->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:40pt;\">17</span></p><h2 style=\"-qt-paragraph-type:empty; margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:48pt;\"><br/></h2></body></html>", nullptr));
        label_tempatual->setText(QCoreApplication::translate("MainWindow", "Temperatura Atual", nullptr));
        label_senstermica->setText(QCoreApplication::translate("MainWindow", "Sensa\303\247\303\243o T\303\251rmica: ", nullptr));
        label_senstermicaval->setText(QCoreApplication::translate("MainWindow", "17,5", nullptr));
        label_sensmax->setText(QCoreApplication::translate("MainWindow", "M\303\241x: ", nullptr));
        label_sensmaxvalor->setText(QCoreApplication::translate("MainWindow", "19,0", nullptr));
        label_sensmin->setText(QCoreApplication::translate("MainWindow", "Min: ", nullptr));
        label_sensminvalor->setText(QCoreApplication::translate("MainWindow", "17", nullptr));
        label_vento->setText(QCoreApplication::translate("MainWindow", "Vento: ", nullptr));
        label_ventovalor->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_humidade->setText(QCoreApplication::translate("MainWindow", "Humidade: ", nullptr));
        label_humidadevalor->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">\302\272</span></p><h2 style=\"-qt-paragraph-type:empty; margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:20pt; font-weight:700;\"></h2></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">C</span></p><h2 style=\"-qt-paragraph-type:empty; margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:700;\"></h2></body></html>", nullptr));
        label_localizacao->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Localiza\303\247\303\243o: </span></p><h2 align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:700;\"><br/></h2></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Corn\303\251lio Proc\303\263pio", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Londrina", nullptr));

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
