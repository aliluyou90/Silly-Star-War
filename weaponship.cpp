#include "weaponship.h"

WeaponShip::WeaponShip(QGraphicsItem * parent ,int health, int speed):Ship(parent,health , speed)
{
setPixmap(QPixmap(":/Images/Images/weaponenemy.png"));
    QTimer * bulletCDtimer = new QTimer ;
connect(bulletCDtimer,SIGNAL(timeout()),this, SLOT(fireCD()));
bulletCDtimer->start(3000);
}
void WeaponShip::fireCD()
{
  bulletCD = true;
}

void WeaponShip::Action()
{
    // move enemy down;

setPos(x(),y()+ getSpeed());
if(bulletCD){
    bulletCD = false;
enemyBullet * bullet = new enemyBullet(0,3);

bullet->setPos(x()+40,y());
scene()->addItem(bullet);
}
destroyShip();
}
