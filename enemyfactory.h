#ifndef ENEMYFACTORY_H
#define ENEMYFACTORY_H
#include <stdlib.h>
#include "chaseship.h"
#include "NormShip.h"
#include "weaponship.h"
#include <QObject>
class  EnemyFactory
{


public:
    EnemyFactory();
    static Ship* enemyRandGen();

};

#endif // ENEMYFACTORY_H
