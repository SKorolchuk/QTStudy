#ifndef PRACTISEAPP_H
#define PRACTISEAPP_H

#include <QtWidgets/QMainWindow>

namespace Ui {
class PractiseApp;
}

class PractiseApp : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit PractiseApp(QWidget *parent = 0);
    ~PractiseApp();
    
private:
    Ui::PractiseApp *ui;

public slots:
    void ShowAboutWindow();
};

#endif // PRACTISEAPP_H
