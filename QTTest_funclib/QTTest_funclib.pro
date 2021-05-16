QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_test_qt_funclib.cpp \
    ../Funclib/funclib.cpp

SUBDIRS += \
    ../Funclib/Funclib.pro

HEADERS += \
    ../Funclib/Funclib_global.h \
    ../Funclib/funclib.h
