#include "gameovermanu.h"
#include "ui_gameovermanu.h"


GameOverManu::GameOverManu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameOverManu)
{
    ui->setupUi(this);
    connect(this,SIGNAL(on_restartButton_clicked()),
            this,SLOT(close()));
    connect(this,SIGNAL(on_quitButton_clicked()),
            this,SLOT(close()));
}

GameOverManu::~GameOverManu()
{
    delete ui;
}
