#include "practiseapp.h"
#include "ui_practiseapp.h"
#include "aboutfrm.h"

PractiseApp::PractiseApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PractiseApp)
{
    ui->setupUi(this);
    connect(ui->menuAbout, SIGNAL(aboutToShow()), this, SLOT(ShowAboutWindow()));
}

PractiseApp::~PractiseApp()
{
    delete ui;
}

void PractiseApp::ShowAboutWindow(){
    AboutFrm abt(this);
    abt.show();
}
