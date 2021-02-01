#pragma once

class Engine
{
	float SizeInLitres;
	int numberOfCylinders;
public:
	Engine(float _sizeInLitres, int _numberOfCylinders);
	float GetSizeInLitres() { return SizeInLitres; }
	int GetNumberOfCylinders() { return numberOfCylinders; }
	void Print();
};