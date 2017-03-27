#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>
#include <QMainWindow>
#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QColor>
#include <QPalette>
#include <QKeyEvent>
#include <QDoubleValidator>
#include <Qt>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_lineEdit_2_cursorPositionChanged();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
        Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
