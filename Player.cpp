#include "Player.h"
#include "bullet.h"



Player::Player(QGraphicsItem *parent): QGraphicsPixmapItem(parent){
    setPos(250,700);
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFocus();

    Speed = 1;
    firesound = new QMediaPlayer;
    firesound->setMedia(QUrl("qrc:/sound/sheji.mp3"));
    setPixmap(QPixmap(":/Images/Images/player.png"));
    bulletCD = true;
    bulletCDtimer = new QTimer();
    connect(bulletCDtimer,SIGNAL(timeout()),this, SLOT(fireCD()));
}



void Player::keyPressEvent(QKeyEvent *event)
{
    switch(event->key()){
    case Qt::Key_Left:
        if (pos().x()>0)
        setPos(x()-12*Speed,y());
        break;
    case Qt::Key_Right:
        if (pos().x()<520)
        setPos(x()+12*Speed,y());
        break;
    case Qt::Key_Up:
        if (pos().y()>0)
        setPos(x(),y()-12*Speed);
        break;
    case Qt::Key_Down:
        if (pos().y()<740)
        setPos(x(),y()+12*Speed);
        break;
    case Qt::Key_Space:
        // create a bullet
        if(bulletCD){
            bulletCD = false;


            bulletCDtimer->start(500);

        firesound->setPosition(0);
        firesound->play();
    Bullet * bullet = new Bullet(0,8);
    bullet->setPos(x()+40,y());
    scene()->addItem(bullet);
        }
        break;
    default:
        break;
    }

}


void Player::fireCD()
{
bulletCD = true;
}
