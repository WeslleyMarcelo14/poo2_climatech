QT       += core gui
QT       += core gui sql
QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Define o ícone do aplicativo
ICON = resource/resource/logo.png  # Caminho para o ícone

SOURCES += \
    clima.cpp \
    climadao.cpp \
    configuracoes.cpp \
    deletewindow.cpp \
    loginwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    registerwindow.cpp \
    updatewindow.cpp \
    usuario.cpp \
    usuariodao.cpp

HEADERS += \
    clima.h \
    climadao.h \
    configuracoes.h \
    deletewindow.h \
    loginwindow.h \
    mainwindow.h \
    registerwindow.h \
    updatewindow.h \
    usuario.h \
    usuariodao.h

FORMS += \
    configuracoes.ui \
    deletewindow.ui \
    loginwindow.ui \
    mainwindow.ui \
    registerwindow.ui \
    updatewindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
