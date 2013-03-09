#include "mydialog.h"

MyDialog::MyDialog(QWidget *parent):
    QWidget(parent)
{
    QLabel *flabel = new QLabel("ok", this, parent);
    flabel->setMargin(100);
    QLabel *dlabel = new QLabel("eee", this, parent);
    dlabel->setMargin(50);
    this->show();
}
