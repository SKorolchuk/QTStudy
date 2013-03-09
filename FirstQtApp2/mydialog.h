#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QWidget>
#include <QLabel>

namespace Ui {
class MyWidget;
}

class MyDialog : QDialog
{
   Q_OBJECT

public:
    MyDialog(QWidget *parent = 0);
    ~MyDialog();

private:
    QLabel *msg;
};

#endif // MYDIALOG_H
