#include "keypad.h"
#include <QSignalMapper>
#include <QDebug>

#include <QCoreApplication>
#include <QSettings>
#include <QApplication>

keypad::keypad(QWidget *parent) :
    QWidget(parent)
{
    ui.setupUi(this);



    QSignalMapper *m = new QSignalMapper(this);
    connect(ui.btn0, SIGNAL(clicked()), m, SLOT(map()));
    m->setMapping(ui.btn0, ui.btn0->text());
    connect(ui.btn1, SIGNAL(clicked()), m, SLOT(map()));
    m->setMapping(ui.btn1, ui.btn1->text());
    connect(ui.btn2, SIGNAL(clicked()), m, SLOT(map()));
    m->setMapping(ui.btn2, ui.btn2->text());
    connect(ui.btn3, SIGNAL(clicked()), m, SLOT(map()));
    m->setMapping(ui.btn3, ui.btn3->text());
    connect(ui.btn4, SIGNAL(clicked()), m, SLOT(map()));
    m->setMapping(ui.btn4, ui.btn4->text());
    connect(ui.btn5, SIGNAL(clicked()), m, SLOT(map()));
    m->setMapping(ui.btn5, ui.btn5->text());
    connect(ui.btn6, SIGNAL(clicked()), m, SLOT(map()));
    m->setMapping(ui.btn6, ui.btn6->text());
    connect(ui.btn7, SIGNAL(clicked()), m, SLOT(map()));
    m->setMapping(ui.btn7, ui.btn7->text());
    connect(ui.btn8, SIGNAL(clicked()), m, SLOT(map()));
    m->setMapping(ui.btn8, ui.btn8->text());
    connect(ui.btn9, SIGNAL(clicked()), m, SLOT(map()));
    m->setMapping(ui.btn9, ui.btn9->text());
    connect(m, SIGNAL(mapped(QString)), this, SLOT(myKeyPressed(QString)));
}


void keypad::myKeyPressed(QString key){
    number = number+key;
    ui.linePassword->setText(number);

}



void keypad::on_btnClr_clicked()
{
    ui.linePassword->setText("");
}

void keypad::on_btnEnter_clicked()
{
    emit sendnumber(number);
    qDebug() << "asdf";
}
