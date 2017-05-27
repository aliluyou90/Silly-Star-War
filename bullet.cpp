#include "bullet.h"
#include <QTimer>
#include <QObject>
#include "Game.h"

extern Game * game;
Bullet::Bullet(QGraphicsItem *parent,
               int Speed): QObject(), QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/Images/zidan.png"));
// connect
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this, SLOT(move()));
//        谁      什么信号         给谁    连哪儿
   timer->start(10);
   bulletSpeed = Speed;


}

void Bullet::move()
{
    // up
    setPos(x(),y()-bulletSpeed*2);
    if (pos().y()<0||pos().y()>800){
        scene()->removeItem(this);
        delete this;
    }
}
