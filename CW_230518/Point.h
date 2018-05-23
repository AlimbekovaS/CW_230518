#pragma once
class Point
{
protected:
	double	x, y;
public:
	Point()=default;
	Point(double x, double y);
	void move(double x, double y);
	virtual void rotate90() = 0;
	double area() {}
	void print();
};
