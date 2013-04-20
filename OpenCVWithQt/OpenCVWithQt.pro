#-------------------------------------------------
#
# Project created by QtCreator 2013-04-20T01:54:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OpenCVWithQt
TEMPLATE = app


SOURCES += main.cpp

HEADERS  +=

FORMS    +=
LIBS += -lopencv_core -lopencv_imgproc -lopencv_highgui
