QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_testa.cpp \
    ../App/hello.cpp \
 \#    ../App/main.cpp
    ilogic.cpp \
    logicimpl.cpp

SUBDIRS += \
    ../App/App.pro

HEADERS += \
    ../App/hello.h \
    ilogic.h \
    logicimpl.h
