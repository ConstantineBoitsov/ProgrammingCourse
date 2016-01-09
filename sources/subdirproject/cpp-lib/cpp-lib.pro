#-------------------------------------------------
#
# Project created by QtCreator 2015-12-28T01:09:50
#
#-------------------------------------------------

QT       -= core gui

TARGET = cpp-lib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += rat_num.cpp \
    swapper.cpp \
    meter_to_sazhen.cpp \
    brick.cpp

HEADERS += rat_num.h \
    swapper.h \
    meter_to_sazhen.h \
    brick.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
