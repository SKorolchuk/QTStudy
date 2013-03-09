#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <QString>
#include <QtGui/QApplication>

using namespace std;

class Person
{
public:
    Person(QString first="", QString second="", int old=0, int tel=0);
    ~Person();
    void TakeIncome(int salary);
    QString GetCharacteristic();
   // bool operator==(const Person &leftP, const Person &rightP);
private:
    int balance;
    int expirience;
    QString firstName;
    QString lastName;
    int age;
    int telefone;
};

#endif // PERSON_H
