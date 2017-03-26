#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMessageBox>
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
    void on_checkBox_2_clicked(bool checked);

    void on_checkBox_clicked(bool checked);

    void on_checkBox_3_clicked(bool checked);

    void on_checkBox_4_clicked(bool checked);

    \

    void on_checkBox_5_clicked(bool checked);

    void on_checkBox_6_clicked(bool checked);

    void on_checkBox_7_clicked(bool checked);

private:
   int sum;
    Ui::Widget *ui;
};

#endif // WIDGET_H
