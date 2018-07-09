#include <iostream>
#include <string>

#include "Employee.h"
#include "Executive.h"

using namespace std;

void main() {

	Executive ex[5];
	Employee em[5];

	for (int i = 0; i < 5; i++) {
		ex[i].setName("Executive" + i);
		ex[i].setAge(18 + i);
		ex[i].setGender(char(102 - i));
		ex[i].setNumber(100 + i);
	}

	for (int i = 0; i < 5; i++) {
		em[i].setName("Employee" + i);
		em[i].setAge(24 + i);
		em[i].setGender(char(102 - i));
		em[i].setNumber(99 - i);
	}

	for (int i = 0; i < 5; i++)
		em[i].showinf();

	for (int i = 0; i < 5; i++)
		ex[i].showinf();

	for (int i = 0; i < 5; i++)
		ex[i].Employee::showinf();

	system("pause");
}