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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteWindow
{
public:
    QWidget *centralwidget;
    QPushButton *cancelarButton;
    QLabel *label_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_nome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_email;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_senha;
    QSpacerItem *verticalSpacer;
    QPushButton *deletarButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DeleteWindow)
    {
        if (DeleteWindow->objectName().isEmpty())
            DeleteWindow->setObjectName("DeleteWindow");
        DeleteWindow->resize(800, 600);
        centralwidget = new QWidget(DeleteWindow);
        centralwidget->setObjectName("centralwidget");
        cancelarButton = new QPushButton(centralwidget);
        cancelarButton->setObjectName("cancelarButton");
        cancelarButton->setGeometry(QRect(320, 430, 101, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(230, 90, 331, 51));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(120, 180, 501, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_nome = new QLineEdit(layoutWidget);
        lineEdit_nome->setObjectName("lineEdit_nome");

        horizontalLayout->addWidget(lineEdit_nome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_email = new QLineEdit(layoutWidget);
        lineEdit_email->setObjectName("lineEdit_email");

        horizontalLayout_2->addWidget(lineEdit_email);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit_senha = new QLineEdit(layoutWidget);
        lineEdit_senha->setObjectName("lineEdit_senha");

        horizontalLayout_3->addWidget(lineEdit_senha);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        deletarButton = new QPushButton(layoutWidget);
        deletarButton->setObjectName("deletarButton");

        verticalLayout->addWidget(deletarButton);

        DeleteWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DeleteWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        DeleteWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DeleteWindow);
        statusbar->setObjectName("statusbar");
        DeleteWindow->setStatusBar(statusbar);

        retranslateUi(DeleteWindow);

        QMetaObject::connectSlotsByName(DeleteWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DeleteWindow)
    {
        DeleteWindow->setWindowTitle(QCoreApplication::translate("DeleteWindow", "MainWindow", nullptr));
        cancelarButton->setText(QCoreApplication::translate("DeleteWindow", "Cancelar", nullptr));
        label_4->setText(QCoreApplication::translate("DeleteWindow", "<h1>Tela de Deletar Usuario<h1>", nullptr));
        label->setText(QCoreApplication::translate("DeleteWindow", "Nome: ", nullptr));
        label_2->setText(QCoreApplication::translate("DeleteWindow", "Email: ", nullptr));
        label_3->setText(QCoreApplication::translate("DeleteWindow", "Senha:", nullptr));
        deletarButton->setText(QCoreApplication::translate("DeleteWindow", "Deletar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteWindow: public Ui_DeleteWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEWINDOW_H
