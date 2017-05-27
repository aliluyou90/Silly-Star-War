#include <QApplication>
#include "Game.h"
#include "gameovermanu.h"
#include "mainwindow.h"
Game * game;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow  m;
    //m.show();


    game = new Game();
    return a.exec();
}
