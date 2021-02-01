#pragma once
#include <string>

using namespace std;

class Person
{
	string name;
	string address;
	bool allowedToDrive;
public:
	Person(string _name, string _address, bool _allowedToDrive);
	string GetName() { return name; }
	string GetAddress() { return address; }
	bool GetAllowedToDrive() { return allowedToDrive; }
	void Print();
};