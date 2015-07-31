#ifndef KEYPAD_H
#define KEYPAD_H

#include "ui_keypad.h"

class keypad : public QWidget
{
    Q_OBJECT

public:
    explicit keypad(QWidget *parent = 0);

private:
    Ui::keypad ui;
    QString number;

private slots:
    void myKeyPressed(QString key);
    void on_btnClr_clicked();

    void on_btnEnter_clicked();

signals :
    void sendnumber(QString);
};

#endif // KEYPAD_H
