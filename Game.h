#ifndef GAME_H
#define GAME_H
#include <QGraphicsView>
#include <QGraphicsscene>
#include <QWidget>
#include <QObject>
#include "Player.h"
#include "Score.h"
#include "Health.h"
#include "mainwindow.h"
#include "gameovermanu.h"
#include "enemyfactory.h"
#include <QDebug>
class Game:public QGraphicsView
{
    Q_OBJECT
public:
    MainWindow * mainmenu;
    Game(QWidget * parent = 0);
    QGraphicsScene * scene;
    Player *player;
    Score *score;
    Health * health;
    bool gameState;
public slots:
    void initGame();
    void getEnemy();


inline void endGame(){
    gameState = false;


 scene->clear();
GameOverManu * gm = new GameOverManu;
gm->show();
connect(gm,SIGNAL(on_restartButton_clicked()),
        this,SLOT(initGame()));
connect(gm,SIGNAL(on_quitButton_clicked()),
        this,SLOT(close()));

  //delete player;
}

};

#endif // GAME_H
