#include "mainform.h"
#include "ui_mainform.h"

MainForm::MainForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainForm)
{
    ui->setupUi(this);
    connect(ui->actionLoad, SIGNAL(activated()), this, SLOT(ReloadHandler()));
}

void MainForm::ReloadHandler(){
    QFile f("D:\\QT_Solutions\\CPPOOPPract\\loading.txt");
    if(!f.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "error", f.errorString());
    }

    QTextStream in(&f);

    while(!in.atEnd()) {
        QString line = in.readLine();
        ui->FileBrowser->append(line);
    }
    f.close();
}

MainForm::~MainForm()
{
    delete ui;
}
