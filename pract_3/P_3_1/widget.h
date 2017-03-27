#ifndef WIDGET_H
#define WIDGET_H

#include <iostream>
#include <QMainWindow>
#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QKeyEvent>
#include <Qt>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

private:
    bool cabs, ins, num, scrl;
    void keyPressEvent(QKeyEvent *event);

    Ui::Widget *ui;
};

#endif // WIDGET_H
