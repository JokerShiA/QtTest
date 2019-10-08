#-------------------------------------------------
#
# Project created by QtCreator 2019-08-07T15:38:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    test.cpp

HEADERS  += mainwindow.h \
    test.h

FORMS    += mainwindow.ui

RESOURCES += \
    rc.qrc
DESTDIR = ../bin
