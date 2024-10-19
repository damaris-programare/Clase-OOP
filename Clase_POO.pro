#-------------------------------------------------
#
# Project created by QtCreator 2023-11-11T19:51:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Clase_POO
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Autoturism.cpp \
    Camion.cpp \
    Motocicleta.cpp \
    Transport.cpp

HEADERS  += mainwindow.h \
    Transport.h \
    Motocicleta.h \
    Camion.h \
    Autoturism.h

FORMS    += mainwindow.ui
