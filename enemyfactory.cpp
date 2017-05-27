#include "enemyfactory.h"
#include <QGraphicsScene>
EnemyFactory::EnemyFactory()
{

}

Ship* EnemyFactory::enemyRandGen()
{
   Ship* ship;

   switch(rand()%3){
    case 0:
        ship = new ChaseShip();
        break;
    case 1:
        ship = new NormShip();
        break;
   case 2:
       ship = new WeaponShip();
       break;
    default:
        break;
    }
    return ship;


}
