#ifndef ENEMYBULLET_H
#define ENEMYBULLET_H
#include "bullet.h"

class enemyBullet: public Bullet
{
public:
    enemyBullet(QGraphicsItem *parent =0, int Speed = 1);
    virtual void move();

};

#endif // ENEMYBULLET_H
