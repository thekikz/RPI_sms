#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include "keypad.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);


private:
    Ui::MainWindow ui;
    keypad* pkey;
    QString settingFile;
    void loadsetting();

private slots:
    void test_signal();
};

#endif // MAINWINDOW_H
