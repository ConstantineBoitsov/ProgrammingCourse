TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    rat_num.cpp

HEADERS += \
    rat_num.h



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
