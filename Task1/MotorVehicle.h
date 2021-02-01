#pragma once
#include "Engine.h"
#include "Body.h"
#include "Person.h"
#include <string>

using namespace std;

class MotorVehicle
{
	Engine engine;
	Body body;
	Person owner;
	float* tireDiameters;
	int numberOfTires;
	string model;
public:
	MotorVehicle(Engine _engine, Body _body, Person _owner, float *_tireDiameters, int _numberOfTires, string _model);

	void Print();
	~MotorVehicle();
};