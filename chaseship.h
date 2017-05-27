#ifndef CHASESHIP_H
#define CHASESHIP_H
#include "ship.h"

class ChaseShip : public Ship
{
    Q_OBJECT
public:
    ChaseShip(QGraphicsItem * parent = 0 ,int health = 1, int speed = 1);
public slots:
    virtual void Action();
};

#endif // CHASESHIP_H
