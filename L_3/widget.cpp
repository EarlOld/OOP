#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    sum = 0;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{


    QString a = QString::number(sum, 'n', 0);

    QMessageBox msgBox;

      msgBox.setText(a);
      msgBox.setWindowTitle("Сума вашого замовлення");
      msgBox.exec();



}



void Widget::on_checkBox_2_clicked(bool checked)
{
    if(checked)
    {
    sum+=349;}
    else sum-=349;
    QString a = QString::number(sum, 'n', 0);
    ui->label_3->setText(a);

}

void Widget::on_checkBox_clicked(bool checked)
{
    if(checked)
    {
    sum+=369;}
    else sum-=369;
    QString a = QString::number(sum, 'n', 0);
    ui->label_3->setText(a);
}

void Widget::on_checkBox_3_clicked(bool checked)
{
    if(checked)
        {
        sum+=189;}
        else sum-=189;
        QString a = QString::number(sum, 'n', 0);
        ui->label_3->setText(a);
}

void Widget::on_checkBox_4_clicked(bool checked)
{
    if(checked)
            {
            sum+=179;}
            else sum-=179;
            QString a = QString::number(sum, 'n', 0);
            ui->label_3->setText(a);
}


void Widget::on_checkBox_5_clicked(bool checked)
{
    if(checked)
            {
            sum+=299;}
            else sum-=299;
            QString a = QString::number(sum, 'n', 0);
            ui->label_3->setText(a);
}

void Widget::on_checkBox_6_clicked(bool checked)
{
    if(checked)
            {
            sum+=149;}
            else sum-=149;
            QString a = QString::number(sum, 'n', 0);
            ui->label_3->setText(a);
}

void Widget::on_checkBox_7_clicked(bool checked)
{
    if(checked)
            {
            sum+=199;}
            else sum-=199;
            QString a = QString::number(sum, 'n', 0);
            ui->label_3->setText(a);
}
