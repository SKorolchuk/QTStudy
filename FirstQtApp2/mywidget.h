#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QLabel>

namespace Ui {
class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();
    
private slots:
    void on_ProcessBtn_clicked();

    void on_MsgShowBoxBtn_clicked();

private:
    Ui::MyWidget *ui;
    QLabel *msg;
};

#endif // MYWIDGET_H
