#include "Person.h"

Person::Person() {

}

Person::Person(string name, int age, char gender)
{
	this->name = name;
	this->age = age;
	this->gender = gender;
}


Person::~Person()
{
}

void Person::showinf() {
	cout << "The person "<<getName() << " is " << getAge() << " years old whose gender is " << getGender() << endl;
}