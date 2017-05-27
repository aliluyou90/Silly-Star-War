#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsScene>
#include <QtEvents>
#include <QMediaPlayer>
#include <QGraphicsPixmapItem>
#include <QTimer>
class Player: public QObject, public QGraphicsPixmapItem{
        Q_OBJECT
        QMediaPlayer * firesound;
        bool bulletCD;


        int Speed;

public:
    void keyPressEvent(QKeyEvent * event);
    Player(QGraphicsItem* parent =0);


private:


    QTimer * bulletCDtimer ;
public slots:
    void fireCD();

};





#endif // MYRECT_H
