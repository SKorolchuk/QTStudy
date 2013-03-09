#include <QtGui/QApplication>
#include "mywidget.h"
#include "person.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();
    Person p("Sergey", "Korolchuk", 18, 3678301);
    QLabel labl(p.GetCharacteristic());
    labl.show();
    return a.exec();
}
