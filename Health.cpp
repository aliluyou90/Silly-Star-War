#include "Health.h"
#include <QFont>
#include "Game.h"
extern Game * game;
Health::Health(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
health = 5;
setPos(x()+250,y());
setPlainText(QString("Health: ")+ QString::number(health));
setDefaultTextColor(Qt::red);
setFont(QFont("times",30));

}

void Health::Decrease()
{

   if(--health<1){
         game->endGame();
         return;
                }
  setPlainText(QString("Health: ")+ QString::number(health));
}
