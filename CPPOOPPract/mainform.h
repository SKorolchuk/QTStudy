#ifndef MAINFORM_H
#define MAINFORM_H

#include <QMainWindow>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QString>

namespace Ui {
class MainForm;
}

class MainForm : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainForm(QWidget *parent = 0);    
    ~MainForm();
    
private:
    Ui::MainForm *ui;

public slots:
   void ReloadHandler();
};

#endif // MAINFORM_H
