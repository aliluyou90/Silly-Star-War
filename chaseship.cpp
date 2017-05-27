#include "chaseship.h"
#include "Game.h"
extern Game *game;
ChaseShip::ChaseShip(QGraphicsItem * parent, int health, int speed):Ship(parent,health , speed)
{
setPixmap(QPixmap(":/Images/Images/chasseenemy.png"));
;
}

void ChaseShip::Action()
{
    // move enemy down;
    if (game->player->pos().y()-y()<500){
        if(game->player->pos().x()-x()>0)
           setPos(x()+1,y()+2 * getSpeed());
        else setPos(x()-1,y()+2 * getSpeed());
    }else {
        setPos(x(),y()+2 * getSpeed());
    }
   destroyShip();

}
