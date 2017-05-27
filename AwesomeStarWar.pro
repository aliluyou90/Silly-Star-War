#-------------------------------------------------
#
# Project created by QtCreator 2017-05-24T17:59:57
#
#-------------------------------------------------

QT       += core gui \
            multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AwesomeStarWar
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp \
    bullet.cpp \
    Game.cpp \
    Player.cpp \
    Score.cpp \
    Health.cpp \
    ship.cpp \
    NormShip.cpp \
    chaseship.cpp \
    mainwindow.cpp \
    enemyfactory.cpp \
    weaponship.cpp \
    enemybullet.cpp \
    gameovermanu.cpp
HEADERS  += \
    bullet.h \
    Game.h \
    Player.h \
    Score.h \
    Health.h \
    ship.h \
    NormShip.h \
    chaseship.h \
    mainwindow.h \
    enemyfactory.h \
    weaponship.h \
    enemybullet.h \
    gameovermanu.h
RESOURCES += \
    external.qrc

FORMS += \
    mainwindow.ui \
    gameovermanu.ui




