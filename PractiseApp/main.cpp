#include <QApplication>
#include "practiseapp.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PractiseApp w;
    w.show();
    
    return a.exec();
}
