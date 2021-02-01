#pragma once
#include <string>

class Point2D
{

	float x, y;
public:
	Point2D();
	Point2D(const Point2D &p);
	Point2D(float _x, float _y);

	float CalcDist(const Point2D &p);
	std::string toString();

	Point2D operator+(const Point2D &p);
	Point2D operator-(const Point2D &p);
	bool operator==(const Point2D &p);
	bool operator!=(const Point2D &p);
};