#include "pch.h"
#include "Engine.h"
#include <iostream>

using namespace std;

Engine::Engine(float _sizeInLitres, int _numberOfCylinders)
{
	SizeInLitres = _sizeInLitres;
	numberOfCylinders = _numberOfCylinders;
}

void Engine::Print() 
{
	cout << "\nEngine\n" << "\nSize in litres: " << SizeInLitres << " l\nNumber of cylinders: " << numberOfCylinders << endl;
}