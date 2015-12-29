TEMPLATE = subdirs

app.depends = lib
testtest.depends = lib
cppapp.depends = cpp-lib
cpptest.depends = cpp-lib

SUBDIRS += \
    app \
    lib \
    testtest \
    cppapp \
    cpp-lib \
    cpptest
