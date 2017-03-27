#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->lineEdit->setInputMask("0.00");
   ui->lineEdit->setValidator( new QDoubleValidator(0, 100, 6, this) );

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_2_cursorPositionChanged()
{
   QPalette palette;
    palette.setColor(QPalette::Base, Qt::red);
    palette.setColor(QPalette::Background, Qt::black);

   ui->lineEdit_2->setPalette(palette);

    //ui->lineEdit_2->setStyleSheet("QLineEdit { background: rgb(0, 255, 255); selection-background-color: rgb(233, 99, 0); }");
}

void MainWindow::on_pushButton_2_clicked()
{
    close();
}

void MainWindow::on_pushButton_clicked()
{
    QString XMAX=ui->lineEdit->text();
     QString XMAX2=ui->lineEdit_2->text();

   double b = XMAX.toDouble()+XMAX2.toDouble();
    QString a = QString::number(b, 'E', 8);

   ui->label_4->setText(a);
   ui->label_4->setStyleSheet("QLabel { font-size: 22`px; }");
}


