#include "mywidget.h"
#include "ui_mywidget.h"
#include "person.h"

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    ui->SubNameTxt->setText("Enter Second Name there...");
    ui->FirstNameTxt->setText("Enter First Name there...");
    this->setWindowTitle("Okay");    
}

MyWidget::~MyWidget()
{
    delete ui;
    delete msg;
}

void MyWidget::on_ProcessBtn_clicked()
{
    ui->SubNameTxt->setText("");
    ui->FirstNameTxt->setText("");
}

void MyWidget::on_MsgShowBoxBtn_clicked()
{
    msg = new QLabel("hello");
    msg->show();
}
