#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{

            ui->setupUi(this);
            ui->pushButton->setEnabled(false);
            ui->pushButton_2->setEnabled(false);
            ui->pushButton_3->setEnabled(false);
            ui->pushButton_4->setEnabled(false);
            cabs = false;
            ins = false;
            num = false;
            scrl = false;
}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_pushButton_5_clicked()
{
    close();
}
void Widget::keyPressEvent(QKeyEvent *event) {
    int key=event->key();

    if(key==Qt::Key_CapsLock){

            cabs = !cabs;

        ui->pushButton->setEnabled(cabs);
    }
    if(key==Qt::Key_NumLock){

            num = !num;

        ui->pushButton_2->setEnabled(num);
    }

    if(key==Qt::Key_Insert){

            ins = !ins;

        ui->pushButton_4->setEnabled(ins);
    }

    if(key==Qt::Key_ScrollLock){

            scrl = !scrl;

        ui->pushButton_3->setEnabled(scrl);
    }


}


void Widget::on_pushButton_clicked()
{

}
