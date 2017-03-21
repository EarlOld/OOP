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

void MainWindow::on_pushButton_clicked()
{
  close();
}

void MainWindow::keyPressEvent(QKeyEvent *event) {
int key=event->key();
QChar keyc=event->key();
ui->label_6->setText(keyc);
ui->label_4->setText(QChar(event->key()));
    if(key==Qt::Key_Space){

        ui->label_6->setText("Space");
        ui->label_5->setText("0x20");
    }
    if(key==Qt::Key_Alt){

        ui->label_6->setText("Alt");
        ui->label_5->setText("0x01000023");
    }
    if(key==Qt::Key_Shift){

        ui->label_6->setText("Shift");
        ui->label_5->setText("0x01000020");
    }
    if(key==Qt::Key_Delete){

        ui->label_6->setText("Delete");
        ui->label_5->setText("0x01000007");
    }
    if(key==Qt::Key_Exclam){

        ui->label_6->setText("Exclam");
        ui->label_5->setText("0x21");
        ui->label_4->setText("!");
    }
    if(key==Qt::Key_Insert){

            ui->label_6->setText("Insert");
            ui->label_5->setText("0x01000006");
            ui->label_4->setText("");
        }
    if(key==Qt::Key_Question){

            ui->label_6->setText("Question");
            ui->label_5->setText("0x3f");
            ui->label_4->setText("?");
        }
    if(key==Qt::Key_Tab){

        ui->label_6->setText("Tab");
        ui->label_5->setText("0x01000001");
    }
    if(key==Qt::Key_Return){

        ui->label_6->setText("Enter");
        ui->label_5->setText("0x01000005");
    }
    if(key==Qt::Key_Control){

        ui->label_6->setText("Control");
        ui->label_5->setText("0x01000021");
    }
    if(key==Qt::Key_CapsLock){

        ui->label_6->setText("CapsLock");
        ui->label_5->setText("0x01000024");
    }

    if(key==Qt::Key_F1){

        ui->label_6->setText("F1");
        ui->label_5->setText("0x01000030");
    }
    if(key==Qt::Key_F2){

        ui->label_6->setText("F2");
        ui->label_5->setText("0x01000031");
    }
    if(key==Qt::Key_F3){

        ui->label_6->setText("F3");
        ui->label_5->setText("0x01000032");
    }if(key==Qt::Key_F4){

        ui->label_6->setText("F4");
        ui->label_5->setText("0x01000033");
    }
    if(key==Qt::Key_F5){

        ui->label_6->setText("F5");
        ui->label_5->setText("0x01000034");
    }if(key==Qt::Key_F6){

        ui->label_6->setText("F6");
        ui->label_5->setText("0x01000035");
    }
    if(key==Qt::Key_F7){

        ui->label_6->setText("F7");
        ui->label_5->setText("0x01000036");
    }
    if(key==Qt::Key_F8){

        ui->label_6->setText("F8");
        ui->label_5->setText("0x01000037");
    }if(key==Qt::Key_F9){

        ui->label_6->setText("F9");
        ui->label_5->setText("0x01000024");
    }if(key==Qt::Key_F10){

        ui->label_6->setText("F10");
        ui->label_5->setText("0x01000039");
    }if(key==Qt::Key_F11){

        ui->label_6->setText("F11");
        ui->label_5->setText("0x0100003a");
    }if(key==Qt::Key_F12){

        ui->label_6->setText("F12");
        ui->label_5->setText("0x0100003b");
    }
if(key==Qt::Key_Escape){

    ui->label_6->setText("Escape");
    ui->label_5->setText("0x01000000");
}

if(key==Qt::Key_Plus){

    ui->label_6->setText("Plus");
    ui->label_5->setText("0x2b");
    ui->label_4->setText("+");
}

if(key==Qt::Key_Comma){

    ui->label_6->setText("Comma");
    ui->label_5->setText("0x2c");
    ui->label_4->setText(",");
}
if(key==Qt::Key_Minus){

    ui->label_6->setText("Minus");
    ui->label_5->setText("0x2d");
    ui->label_4->setText("-");
}
if(key==Qt::Key_Period){

    ui->label_6->setText("Period");
    ui->label_5->setText("0x2e");
    ui->label_4->setText(".");
}
if(key==Qt::Key_Slash){

    ui->label_6->setText("Slash");
    ui->label_5->setText("0x2f");
    ui->label_4->setText("/");
}
if(key==Qt::Key_0){

    ui->label_6->setText("0");
    ui->label_5->setText("0x30");
    ui->label_4->setText("0");
}
if(key==Qt::Key_1){

    ui->label_6->setText("1");
    ui->label_5->setText("0x31");
    ui->label_4->setText("1");
}

if(key==Qt::Key_2){

    ui->label_6->setText("2");
    ui->label_5->setText("0x32");
    ui->label_4->setText("2");
}
if(key==Qt::Key_3){

    ui->label_6->setText("2");
    ui->label_5->setText("0x33");
    ui->label_4->setText("3");
}

if(key==Qt::Key_4){

    ui->label_6->setText("4");
    ui->label_5->setText("0x34");
    ui->label_4->setText("4");
}

if(key==Qt::Key_5){

    ui->label_6->setText("5");
    ui->label_5->setText("0x352");
    ui->label_4->setText("5");
}
if(key==Qt::Key_6){

    ui->label_6->setText("6");
    ui->label_5->setText("0x36");
    ui->label_4->setText("6");
}
if(key==Qt::Key_7){

    ui->label_6->setText("7");
    ui->label_5->setText("0x37");
    ui->label_4->setText("7");
}

if(key==Qt::Key_8){

    ui->label_6->setText("8");
    ui->label_5->setText("0x38");
    ui->label_4->setText("8");

}
if(key==Qt::Key_9){

    ui->label_6->setText("9");
    ui->label_5->setText("0x39");
    ui->label_4->setText("9");
}

if(key==Qt::Key_Backspace){

    ui->label_6->setText("Backspace");
    ui->label_5->setText("0x01000003");
    ui->label_4->setText("");
}
}
void MainWindow::keyReleaseEvent(QKeyEvent *event) {

        ui->label_6->setText("");
        ui->label_5->setText("");
        ui->label_4->setText("");
}
