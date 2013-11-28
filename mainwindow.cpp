#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "MazeWindow.h"
#include <QtGui>
#include <QOpenGLContext>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    MazeWindow *mazeWindow = new MazeWindow();


    QWidget *container = QWidget::createWindowContainer(mazeWindow);
    container->setMinimumSize(100, 100);
    container->setMaximumSize(200, 200);
    container->setFocusPolicy(Qt::TabFocus);

    setCentralWidget(container);

}

MainWindow::~MainWindow()
{
    delete ui;
}
