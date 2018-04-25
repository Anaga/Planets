#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void printMyName(QString qsName);
    void i666i(QString qsName);

    void aOOa(QString qsName);
private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsItem  *gi_bg;
};

#endif // MAINWINDOW_H
