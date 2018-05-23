#include "Triangle.h"
#include"library.h"
#include<cmath>


Triangle::Triangle()
{
	a = b = c = 0;
}

double Triangle::area()
{
	double p = (a + b + c) / 2;
	double s= sqrt(p*((p-a)*(p-b)*(p-c)));
	return s;
}
//bool Triangle::compare(const Triangle & tr)
//{
//	if (this->() == tr.S)
//		return true;
//	else
//		return false;
//}

void Triangle::rotate90()
{
	swap(a, b);
	swap(b, c);
	swap(a, c);

}
istream & operator >> (istream & is, Triangle & T)
{
	is >> T.x >> T.y >> T.a >> T.b>>T.c;
	return is;
}
ostream & operator<<(ostream & os, Triangle & T)
{
	os << T.x << "\t" << T.y << "\t" << T.a << "\t" << T.b<<"\t"<<T.c;
	return os;
}