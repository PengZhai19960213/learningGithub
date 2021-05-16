include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        ../Funclib/Funclib_global.h \
        ../Funclib/funclib.h \
        tst_testlib.h

SOURCES += \
        ../Funclib/funclib.cpp \
        main.cpp

SUBDIRS += \
    ../Funclib/Funclib.pro
