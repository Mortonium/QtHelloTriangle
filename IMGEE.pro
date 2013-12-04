#-------------------------------------------------
#
# Project created by QtCreator 2013-11-28T13:23:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IMGEE
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    MazeWindow.cpp \
    maze3d.cpp \
    size.cpp \
    position.cpp

HEADERS  += mainwindow.h \
    MazeWindow.h \
    maze3d.h \
    size.h \
    position.h

FORMS    += mainwindow.ui
