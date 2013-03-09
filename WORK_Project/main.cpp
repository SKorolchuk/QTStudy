#include <QCoreApplication>
#include <iostream>

bool isContainEvenNumbers(int numbers[], int length) {
    for (int i = 0; i < length; i++) {
        if (numbers[i] % 2 != 0)
            return false;
    }
    return true;
}

int main(int argc, char *argv[])
{
    int evenMas[3];
    int oddMas[3];
    for (int i = 0; i < 3; i++)
    {
        evenMas[i] = i*2;
        oddMas[i] = i;
    }
    std::cout << "hello" << std::endl << "world";
    std::cout << "evenMas is even? " << (isContainEvenNumbers(evenMas, 3) ? "true" : "false") << std::endl;
    std::cout << "oddMas is even? " << isContainEvenNumbers(oddMas, 3) << std::endl;
    QCoreApplication a(argc, argv);
    
    return a.exec();
}
