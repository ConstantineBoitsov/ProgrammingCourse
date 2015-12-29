#-------------------------------------------------
#
# Project created by QtCreator 2015-12-25T09:20:44
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_cpptesttest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += tst_cpptesttest.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../cpp-lib/release/ -lcpp-lib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../cpp-lib/debug/ -lcpp-lib
else:unix: LIBS += -L$$OUT_PWD/../cpp-lib/ -lcpp-lib

INCLUDEPATH += $$PWD/../cpp-lib
DEPENDPATH += $$PWD/../cpp-lib

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../cpp-lib/release/libcpp-lib.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../cpp-lib/debug/libcpp-lib.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../cpp-lib/release/cpp-lib.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../cpp-lib/debug/cpp-lib.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../cpp-lib/libcpp-lib.a
