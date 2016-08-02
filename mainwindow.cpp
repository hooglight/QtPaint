#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPointF>
#include <QGraphicsScene>
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);

    ui->graphicsView->setScene(scene);

    this->setCentralWidget(ui->graphicsView);

   // connect(scene,SIGNAL(),this,SLOT(MouseClickPaint())

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::MouseClickPaint()
{
   //scene->addEllipse();
}

void MainWindow::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    qDebug() << Q_FUNC_INFO << event->scenePos();
    QGraphicsScene::mousePressEvent(event);
}
