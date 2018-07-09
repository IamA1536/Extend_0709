#include "Employee.h"



Employee::Employee()
{
}

Employee::~Employee()
{
}

void Employee::showinf() {
	cout << "The Employee " << getName() << " is " << getAge() << " years old whose gender is " << getGender() << " and number is " << getNumber()<<endl;
}
