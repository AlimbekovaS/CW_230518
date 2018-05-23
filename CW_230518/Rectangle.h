#pragma once
#include "Point.h"
#include"library.h"
class Rectangle :	public Point
{
private:
	double a, b;
public:
	Rectangle();
	Rectangle(double x, double y, double a, double b) :Point(x, y), a(a), b(b) {};
	void rotate90();
	double area();
	friend istream & operator >> (istream& is, Rectangle&R);
	friend ostream & operator << (ostream& os, Rectangle&R);
	
};

