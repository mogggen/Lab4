#include "pch.h"
#include "Engine.h"
#include "Body.h"
#include "Person.h"
#include "MotorVehicle.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "how many Vehicles would you like to construct: ";
	int objects;
	int j = 0;
	cin >> objects;
	while (j < objects)
	{

		cout << "The engines size in litres: ";
		float sizeInLitres;
		cin >> sizeInLitres;

		cout << "The engines number of cylinders: ";
		int numberOfCylinders;
		cin >> numberOfCylinders;

		Engine _engine(sizeInLitres, numberOfCylinders);




		cout << "The color of the body: ";
		string color;
		cin >> color;

		cout << "the width of the body: ";
		float width;
		cin >> width;

		cout << "The height of the body: ";
		float height;
		cin >> height;

		Body _body(color, width, height);




		cout << "The Persons name: ";
		string name;
		cin >> name;

		cout << "The owners address: ";
		string address;
		cin >> address;

		cout << "Is the person allowed to drive: ";
		bool allowedToDrive;
		cin >> allowedToDrive;

		Person _owner(name, address, allowedToDrive);




		cout << "Number of tires: ";
		int numberOfTires;
		cin >> numberOfTires;

		cout << "Diameters for the " << numberOfTires << " tires: ";
		float *tireDiamters = new float[numberOfTires];
		for (int i = 0; i < numberOfTires; i++) cin >> *(tireDiamters + i);
		cout << "the vehicles model: ";
		string model;
		cin >> model;



		MotorVehicle Car(_engine, _body, _owner, tireDiamters, numberOfTires, model);
		Car.Print();
		
		_engine.Print();
		_body.Print();
		_owner.Print();

		j++;
	}
}