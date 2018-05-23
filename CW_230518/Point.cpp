#include"library.h"
#include"Point.h"

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}
//void Point::MoveX(double shag)
//{
//	this->x += shag;
//
//}
//void Point::MoveY(double shag)
//{
//	this->y += shag;
//}

void Point::move(double x, double y)
{
	this->x += x;
	this->y += y;
}

void Point::print()
{
	cout << "x= " << x << "y= " << y;
}