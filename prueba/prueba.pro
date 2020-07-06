#-------------------------------------------------
#
# Project created by QtCreator 2020-07-02T00:47:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = prueba
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ../class.cpp

HEADERS  += mainwindow.h \
    ../class.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc
