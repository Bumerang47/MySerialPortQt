#-------------------------------------------------
#
# Project created by QtCreator 2015-02-15T23:00:47
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ComandCom
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialogstatusserialport.cpp

HEADERS  += mainwindow.h \
    dialogstatusserialport.h

FORMS    += mainwindow.ui \
    dialogstatusserialport.ui

##-----FOR PARMS TO QT4-------------
CONFIG += serialport
#
