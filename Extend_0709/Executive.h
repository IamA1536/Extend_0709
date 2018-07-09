#pragma once
#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

class Executive :
	public Employee
{
public:
	Executive();
	Executive(string name, int age, char gender, int number) :Employee(name, age, gender, number) {

	}
	~Executive();

	void showinf() {
		Employee::showinf();
		cout << " Executive."<<endl;
	}
};

