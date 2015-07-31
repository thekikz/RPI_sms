#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "keypad.h"
#include <QDebug>

#include <QCoreApplication>
#include <QFile>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    ui.setupUi(this);
    pkey = new keypad(this);

    settingFile = QApplication::applicationDirPath()+"/number.ini";
    QFile file("number.ini");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
           return;

       QTextStream in(&file);
       while (!in.atEnd()) {
           QString line = in.readLine();
           //process_line(line);
       }
        //qDebug()<< line;
    //ui.number_labels->setText(settingFile);
    ui.horizontalLayout->addWidget(pkey);
    //loadsetting();
    //connect(pkey,pkey->sendnumber(QString),this,SLOT(test_signal()));
}

void MainWindow::test_signal(){

    qDebug() << "signal send";
}

void MainWindow::loadsetting(){

}
