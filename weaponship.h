#ifndef WEAPONSHIP_H
#define WEAPONSHIP_H
#include "ship.h"
#include "enemybullet.h"
class WeaponShip: public Ship
{
    Q_OBJECT
    bool bulletCD;


public:
    WeaponShip(QGraphicsItem * parent = 0 ,int health = 3, int speed = 1);

public slots:
    virtual void Action();
void fireCD();
};

#endif // WEAPONSHIP_H
