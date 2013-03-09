#include <QtCore/QCoreApplication>
#include <iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int b;
    std::cin >> b;
    std::cout << b;
    return a.exec();
}
