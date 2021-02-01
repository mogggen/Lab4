#include "pch.h"
#include "Point2D.h"
#include "PolyLine.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "polyline maximum length: ";
	int maximum;
	cin >> maximum;
	Point2D p0 = Point2D(99, 13);
	PolyLine pl = PolyLine(maximum);

	pl.AddBack(Point2D(44, 23));
	pl.AddBack(p0);
	pl.AddBack(Point2D(2, -55));

	pl.PrintCoordinates();

	cout << pl.Retrive(0).toString() << endl;
	cout << pl.Retrive(1).toString() << endl;
	cout << pl.Retrive(2).toString() << endl;

	cout << "Total dist: " << pl.GetTotalDist() << endl;

	pl.RemoveBack();
	pl.RemoveBack();
	cout << pl.GetArrLength() << endl;
	pl.RemoveBack();
	
	pl.RemoveBack();

	cout << pl.GetArrLength() << endl;
	pl.AddBack(Point2D(9, 9));

	pl.Retrive(1);
}