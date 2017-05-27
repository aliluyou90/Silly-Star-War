#ifndef GAMEOVERMANU_H
#define GAMEOVERMANU_H

#include <QDialog>

namespace Ui {
class GameOverManu;
}

class GameOverManu : public QDialog
{
    Q_OBJECT

public:
    explicit GameOverManu(QWidget *parent = 0);
    ~GameOverManu();
signals:
void on_quitButton_clicked();
void on_restartButton_clicked();
private:
    Ui::GameOverManu *ui;
};

#endif // GAMEOVERMANU_H
