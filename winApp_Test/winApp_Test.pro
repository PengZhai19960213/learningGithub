QT += testlib
QT += gui
QT+=widgets
CONFIG += qt warn_on depend_includepath testcase

TEMPLATE = app

SOURCES +=  tst_test.cpp \
#    ../winApp/main.cpp \
    ../winApp/mainwindow.cpp \
    ../winApp/mybutton.cpp

FORMS += \
    ../winApp/mainwindow.ui

HEADERS += \
    ../winApp/mainwindow.h \
    ../winApp/mybutton.h

SUBDIRS += \
    ../winApp/winApp.pro
