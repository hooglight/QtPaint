#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>
#include <QDialog>


#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QGraphicsSceneMouseEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QGraphicsScene *scene;

    virtual void mousePressEvent(QGraphicsSceneMouseEvent * event);



private:
    Ui::MainWindow *ui;

public slots:
    void MouseClickPaint();

};

#endif // MAINWINDOW_H
