#include "aboutfrm.h"
#include "ui_aboutfrm.h"

AboutFrm::AboutFrm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AboutFrm)
{
    ui->setupUi(this);
}

AboutFrm::~AboutFrm()
{
    delete ui;
}
