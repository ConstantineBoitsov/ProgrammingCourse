#-------------------------------------------------
#
# Project created by QtCreator 2015-11-04T16:53:22
#
#-------------------------------------------------

QT       -= core gui

TARGET = lib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    brick.c \
    matrix.c \
    meter_to_sazhen.c \
    swapper.c \
    lower.c

HEADERS += \
    brick.h \
    matrix.h \
    meter_to_sazhen.h \
    swapper.h \
    lower.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
