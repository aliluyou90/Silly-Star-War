#ifndef BULLET_H
#define BULLET_H
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
class Bullet : public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT // have to ad a macro here

    int bulletSpeed;

public:
    inline int getspeed(){return bulletSpeed;}
    void setSpeed(int newspeed){bulletSpeed = newspeed;}
    Bullet(QGraphicsItem *parent =0, int Speed = 1);
public slots:
    virtual void move();
};

#endif // BULLET_H
