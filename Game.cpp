#include "Game.h"
#include "NormShip.h"
#include <QMediaplayer>
#include <QWidget>
#include <QBrush>
#include <QImage>
Game::Game(QWidget *parent)
{

    // setup scene , widget is a view
    gameState = true;
mainmenu = new MainWindow();
mainmenu->show();
connect(mainmenu,SIGNAL(on_startButton_clicked()),
        this,SLOT(initGame()));
connect(mainmenu,SIGNAL(on_quitButton_clicked()),
        this,SLOT(close()));
scene = new QGraphicsScene();
scene->setSceneRect(0,0 ,600, 800);
setBackgroundBrush(QBrush(QImage(":/Images/background.jpg")));
setScene(scene);
setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
setFixedSize(600,800);

}

void Game::initGame()
{
    //mainmenu->close();
    gameState = true;
    player = new Player();
    scene->addItem(player);
    health = new Health();
    scene->addItem(health);
    // Score Board;
    score = new Score();
    scene->addItem(score);
   // enemy_factory = new EnemyFactory();
    // gen enemies
   QTimer * timer = new QTimer();
   QObject::connect(timer,SIGNAL(timeout()),this,SLOT(getEnemy()));
   timer->start(2000);
    //play BGM
    QMediaPlayer * BGMplayer = new QMediaPlayer();
    BGMplayer->setMedia(QUrl("qrc:/sound/bgm.mp3"));
    BGMplayer->play();
    show();
}

void Game::getEnemy()
{
    if (gameState)
    scene->addItem(EnemyFactory::enemyRandGen());
}




