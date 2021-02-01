#include "pch.h"
#include "Body.h"
#include <iostream>
#include <string>

using namespace std;

Body::Body(string _color, float _width, float _height)
{
	color = _color;
	width = _width;
	height = _height;
}

void Body::Print()
{
	cout << "\nBody\n" << "\nColor: " << color << "\nWidth: " << width << " units\nHeight: " << height << " units" << endl;
}