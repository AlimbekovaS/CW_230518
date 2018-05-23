#include "Rectangle.h"
#include"library.h"


Rectangle::Rectangle()
{
	a = b = 0;
}

void Rectangle::rotate90()
{
	swap(a, b);
}
double Rectangle::area()
{
	return a*b;
}
istream & operator >> (istream & is, Rectangle & R)
{
	is >> R.x >> R.y >> R.a>>R.b;
	return is;
}
ostream & operator<<(ostream & os, Rectangle & R)
{
	os << R.x << "\t" << R.y << "\t" << R.a<<"\t"<<R.b;
	return os;
}