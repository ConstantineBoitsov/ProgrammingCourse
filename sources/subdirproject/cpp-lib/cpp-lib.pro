#-------------------------------------------------
#
# Project created by QtCreator 2015-12-28T01:09:50
#
#-------------------------------------------------

QT       -= core gui

TARGET = cpp-lib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += rat_num.cpp

HEADERS += rat_num.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
