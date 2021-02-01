#include "pch.h"
#include "Point2D.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Point2D p0(0, -6), p1(3, 4); // 1
	p0.toString();
	p1.toString();
	Point2D p2 = p0; // 2
	cout << p2.toString() << endl; // 3
	Point2D p3 = p1 + p2; // 4
	cout << p3.toString() << endl;
	cout << "The distance is " << p3.CalcDist(p2) << " units." << endl; // 5
	cout << (p3 == p0 ? "equal" : "not equal") << endl;
	cout << (p3 == p1 ? "equal" : "not equal") << endl;
	cout << (p3 == p2 ? "equal" : "not equal") << endl; // 6
}