#include "pch.h"
#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

Person::Person(string _name, string _address, bool _allowedToDrive)
{
	name = _name;
	address = _address;
	allowedToDrive = _allowedToDrive;
}

void Person::Print()
{
	cout << "\nOwner\n" << "\nName: " << name << "\nAddress: " << address << 
		"\nDriving license: " << (allowedToDrive ? "acquaried" : "not applicable") << endl;
}