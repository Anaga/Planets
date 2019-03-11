#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    scene->addEllipse(250,50,550,550,QPen(Qt::black,5),QBrush(Qt::blue));

    bg_pixmap = new QPixmap(":/img/galaxy_starfield.png");
    gi_bg  = scene->setBackgroundBrush(QBrush(& QPixmap(bg_pixmap)));
    //cat1 = new QPixmap(":/img/galaxy_starfield.png");
    //qDebug() << "Cat size" << cat1->size();

    //gitem = scene->addPixmap(*cat1);
    //gitem->setScale(1);

    printMyName("Aleksandr");
    printMyName("Boris");
























    i666i("mYSHLENsTAR");
    aOOa("Do you know the WaY?");
}

MainWindow::~MainWindow( )
{
    delete ui;
}

void MainWindow::printMyName(QString qsName)
{
    qDebug() << "My name is " << qsName;
}

void MainWindow::i666i(QString qsName)
{
    qDebug() << "Satan new name is " << qsName;
}


void MainWindow::aOOa(QString qsName)
{
    qDebug() << "Woodo just say behind you " << qsName;
}
