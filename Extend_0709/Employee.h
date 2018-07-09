#pragma once
#include "Person.h"
#include <string>
using namespace std;

class Employee :
	public Person
{
public:
	Employee();
	Employee(string name, int age, char gender, int number) :Person(name, age, gender){
		this->number = number;
	}
	~Employee();

	void showinf();

	void setNumber(int number) {
		this->number = number;
	}

	int getNumber() {
		return number;
	}

private:
	int number;
};

