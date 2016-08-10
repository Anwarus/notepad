#-------------------------------------------------
#
# Project created by QtCreator 2016-08-06T23:16:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Not
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    editor.cpp \
    optionswindow.cpp

HEADERS  += mainwindow.h \
    editor.h \
    optionswindow.h

FORMS    += mainwindow.ui \
    optionswindow.ui
