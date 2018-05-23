#pragma once
#include "Point.h"
#include"library.h"
class Triangle : public Point
{
	double a, b, c;
public:
	Triangle();
	Triangle(double x, double y, double a, double b, double c) :Point(x, y),a(a),b(b),c(c) {};
	void rotate90();
	double area();
	//bool compare(const Triangle &tr);
	friend istream & operator >> (istream& is, Triangle &T);
	friend ostream & operator << (ostream& os, Triangle &T);
};

