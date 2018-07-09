#pragma once

#ifndef PRESON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person();
	Person(string name, int age, char gender);

	~Person();

	void showinf();

	void setName(string name) {
		this->name = name;
	}

	string getName() {
		return name;
	}

	void setAge(int age) {
		this->age = age;
	}

	int getAge() {
		return age;
	}

	void setGender(char gender) {
		this->gender = gender;
	}

	char getGender() {
		return gender;
	}

private:
	string name;
	int age;
	char gender;
};

#endif

