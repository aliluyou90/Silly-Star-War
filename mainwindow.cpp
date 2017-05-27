#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Game.h"
extern Game * game;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(this,SIGNAL(on_startButton_clicked()),
            this,SLOT(close()));
    connect(this,SIGNAL(on_quitButton_clicked()),
            this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}




