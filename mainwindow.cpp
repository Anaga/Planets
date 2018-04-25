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
    //cat1 = new QPixmap(":/img/galaxy_starfield.png");
    //qDebug() << "Cat size" << cat1->size();

    //gitem = scene->addPixmap(*cat1);
    //gitem->setScale(1);

    printMyName("Aleksandr");
    printMyName("Boris");
























    i666i("mYSHLENsTAR");
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
