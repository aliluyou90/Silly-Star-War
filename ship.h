#ifndef SHIP_H
#define SHIP_H
#include <QObject>
#include <QTimer>
#include <QList>
#include <QGraphicsPixmapItem>

class Ship : public QObject,
        public QGraphicsPixmapItem
{
    Q_OBJECT
    int Health;
    int Speed;
public:
    Ship(QGraphicsItem * parent = 0,int health = 1, int speed=1);
    inline int getSpeed() const {return Speed;}
    inline int getHealth() const {return Health;}
    virtual void destroyShip();

public slots:
    virtual void Action() = 0;
};

#endif // SHIP_H
