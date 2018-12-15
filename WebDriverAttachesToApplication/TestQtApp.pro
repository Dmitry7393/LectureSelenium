#-------------------------------------------------
#
# Project created by QtCreator 2018-12-15T19:08:06
#
#-------------------------------------------------

QT       += core gui widgets network xml declarative

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TestQtApp
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

INCLUDEPATH += /home/bukshadmitry/my_projects/LectureSelenium/WebDriverAttachesToApplication/qtwebdriver/Test
INCLUDEPATH += /home/bukshadmitry/my_projects/LectureSelenium/WebDriverAttachesToApplication/qtwebdriver/h
LIBS += -L/home/bukshadmitry/my_projects/LectureSelenium/WebDriverAttachesToApplication/qtwebdriver/libs
LIBS += -lchromium_base -lWebDriver_core -lWebDriver_extension_qt_base
DEFINES += QT_NO_SAMPLES="1"
DEFINES += QT_NO_QML="0"
DEFINES += USE_AUTOTESTS="1"
