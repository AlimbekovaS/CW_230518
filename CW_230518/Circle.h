#pragma once
#include "Point.h"
#include"library.h"
class Circle :
	public Point
{
private:
	double R;
public:
	Circle();
	Circle(double x, double y, double R) :Point(x, y), R(R) {}
	double area();
	void rotate90(){}	
	friend istream & operator >> (istream& is, Circle&c);
	friend ostream & operator << (ostream& os, Circle&c);
};

