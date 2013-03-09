#include "person.h"

Person::Person(QString first, QString second, int old, int tel)
{
    Person::firstName = first;
    Person::lastName = second;
    Person::age = old;
    Person::telefone  = tel;
}

Person::~Person()
{
}

void Person::TakeIncome(int salary)
{
}

QString Person::GetCharacteristic()
{
    return QString("<font color=green size=34>"+this->firstName+" "+this->lastName+" "+QString().setNum(this->age)+" "+QString().setNum(this->telefone)+"</font>");
}

//bool Person::operator ==(Person &leftP, Person &rightP)
//{
//    return leftP.age==rightP.age && leftP.telefone==rightP.telefone && leftP.firstName==rightP.firstName
//            && leftP.lastName==rightP.lastName;
//}
