#include "ship.h"
#include <stdlib.h> // rand
#include <QList>
#include "bullet.h"
#include "Game.h"
extern Game * game;
Ship::Ship(QGraphicsItem * parent,
           int health, int speed):QObject(),QGraphicsPixmapItem(parent)
{
    this->Health = health;
    this->Speed = speed;

    int random_number = rand() %520;
    setPos(random_number,0);


    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this, SLOT(Action()));
    timer->start(10);

}

void Ship::destroyShip()
{

    if (pos().y()>1000){

        scene()->removeItem(this);
        delete this;
        return;
    }

     QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0; i< colliding_items.size(); ++i){
        if (typeid(*(colliding_items[i])) == typeid(Player)){

            scene()->removeItem(this);
            game->health->Decrease();


                    // delete
            delete this;
            return;
        }


        if (typeid(*(colliding_items[i])) == typeid(Bullet)){
            game->score->increase();
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
                    // delete
            delete this;
            delete colliding_items[i];
            return;
        }
    }
}


