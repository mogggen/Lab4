#pragma once
#include "Point2D.h"

class PolyLine
{
	int arrLength = 0;
	int maximum;
	Point2D *points;
public:
	PolyLine(int _maximum);
	void AddBack(const Point2D &p);
	Point2D Retrive(const int index);
	void RemoveBack();
	
	bool ContainsPoint();
	int GetArrLength();
	float GetTotalDist();
	void PrintCoordinates();
	~PolyLine();
};