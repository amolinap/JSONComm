#-------------------------------------------------
#
# Project created by QtCreator 2016-12-10T22:25:25
#
#-------------------------------------------------

QT       += core gui network xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtJSONFile
TEMPLATE = app
BASEDIR = $$PWD
TARGETDIR = $$OUT_PWD
BUILDDIR = $$TARGETDIR/build
OBJECTS_DIR = $$BUILDDIR/obj
MOC_DIR = $$BUILDDIR/moc
UI_DIR = $$BUILDDIR/generated

SOURCES += \
        main.cpp \
        MainWidget.cpp

HEADERS += \
        MainWidget.h

FORMS += \
        MainWidget.ui
