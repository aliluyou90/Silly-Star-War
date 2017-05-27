#ifndef NORMSHIP_H
#define NORMSHIP_H
#include "ship.h"



class NormShip : public Ship
{
    Q_OBJECT
public:
    NormShip(QGraphicsItem * parent = 0 ,int health = 1, int speed = 1);
public slots:
    virtual void Action();
};

#endif // ENEMY_H
