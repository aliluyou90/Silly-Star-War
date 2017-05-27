#include "enemybullet.h"
#include "Game.h"

extern Game* game;
enemyBullet::enemyBullet(QGraphicsItem *parent, int newSpeed):Bullet(parent)
{
setSpeed(newSpeed);
}

void enemyBullet::move()
{

    QList<QGraphicsItem *> colliding_items = collidingItems();
   for (int i = 0; i< colliding_items.size(); ++i){
       if (typeid(*(colliding_items[i])) == typeid(Player)){
           scene()->removeItem(this);
           game->health->Decrease();


                   // delete
           delete this;
           return;
       }

}

   setPos(x(),y()+getspeed());
   if (pos().y()>800){
       scene()->removeItem(this);
       delete this;
   }
}
