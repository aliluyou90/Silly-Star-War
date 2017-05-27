#include "NormShip.h"

//#include <QDebug>


NormShip::NormShip(QGraphicsItem * parent, int health, int speed):Ship(parent,health , speed)
{
setPixmap(QPixmap(":/Images/Images/normenemy.png"));
}

void NormShip::Action()
{
    // move enemy down;

    setPos(x(),y()+2 * getSpeed());
destroyShip();
}
