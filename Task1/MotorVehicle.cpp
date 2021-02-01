#include "pch.h"
#include "MotorVehicle.h"


MotorVehicle::MotorVehicle(Engine _engine, Body _body, Person _owner, float *_tireDiameters, int _numberOfTires, string _model) : engine(_engine), body(_body), owner(_owner)
{
	tireDiameters = _tireDiameters;
	numberOfTires = _numberOfTires;
	model = _model;
}

void MotorVehicle::Print()
{
	engine.Print();
	body.Print();
	owner.Print();
	cout << "\nOthers\n\n";
	for (int i = 0; i < numberOfTires; i++) cout << "Tire #" << i + 1 << ": " << *(tireDiameters + i) << " units in Diameters\n";
	cout << "Number of tires: " << numberOfTires << endl;
	cout << "Model: " << model;
}

MotorVehicle::~MotorVehicle()
{
	delete[] tireDiameters;
}