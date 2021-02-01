#pragma once
#include <iostream>

using namespace std;

class Body
{
	string color;
	float width, height;
public:
	Body(string _color, float _width, float _height);
	string GetColor() { return color; }
	float GetWidth() { return width; }
	float GetHeight() { return height; }
	void Print();
};