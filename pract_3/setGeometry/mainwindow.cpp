#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch(event->key()) {
                  case Qt::Key_P:
                                   if(event->modifiers() & Qt::ShiftModifier) {
                                       if(geometry().width() > geometry().height())
                                       {
                                       QSize *mysize = new QSize(geometry().width(), geometry().width());
                                       resize(mysize->width(), mysize->height());
                                       }
                                       else
                                       {
                                           QSize *mysize = new QSize(geometry().height(), geometry().height());
                                           resize(mysize->width(), mysize->height());
                                       }                          //было нажато сочетание Shift + S
                                   }

                  default:
                                   QWidget::keyPressEvent(event); //иначе передаем событие дальше
            }
    }

