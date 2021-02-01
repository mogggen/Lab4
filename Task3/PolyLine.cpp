#include "pch.h"
#include "PolyLine.h"
#include "Point2D.h"
#include <iostream>

PolyLine::PolyLine(int _maximum)
{
	maximum = _maximum;
	points = new Point2D[maximum];
}

void PolyLine::AddBack(const Point2D &p)
{
	if (arrLength < maximum)
	{
		points[arrLength] = p;
		//(points + arrLength)->x = p.x;
		//(points + arrLength)->y = p.y;
		arrLength++;
	}
	else
		std::cerr << "The polyline is currently full." << std::endl;
}

void PolyLine::RemoveBack()
{
	if (arrLength > 0)
	{
		arrLength--;
	}
	else
		std::cerr << "The polyline is empty" << std::endl;
}

Point2D PolyLine::Retrive(const int index)
{
	if (index < arrLength)
	{
		return points[index];
	}
		
	else
	{
		std::cerr << "index out of range" << std::endl;
		return Point2D(0, 0);
	}
}

bool PolyLine::ContainsPoint() { return arrLength != 0; }

int PolyLine::GetArrLength() { return arrLength; }

float PolyLine::GetTotalDist()
{
	float sum = 0.0f;
	for (int i = 1; i < arrLength; i++)
		sum += points[i].CalcDist(points[i - 1]);
	return sum;
}

void PolyLine::PrintCoordinates()
{
	for (int i = 0; i < arrLength; i++)
		std::cout << points[i].toString() << std::endl;
}

PolyLine::~PolyLine()
{
	delete[] points;
}




// get the length of the Polyline(i.e.calculate the sum of the distances between the points, use the method in Point2D from Task 2!)
//print the Polyline coordinates(i.e.call toString()from Task 2 for each point in the Polyline and print out the values)