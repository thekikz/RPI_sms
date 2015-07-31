#-------------------------------------------------
#
# Project created by QtCreator 2015-07-31T17:05:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RPI_sms
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    keypad.cpp

HEADERS  += mainwindow.h \
    keypad.h

FORMS    += mainwindow.ui \
    keypad.ui
