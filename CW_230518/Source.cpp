#include"library.h"
#include"Point.h"
#include"Triangle.h"
#include"Circle.h"
#include"Rectangle.h"
int main()
{
	/*Point p(5,6);
	p.MoveX(2);
	p.print();
	p.MoveY(6);
	p.print();
	Triangle t(2, 3, 5), t2(6,8,9);
	t.compare(t2);*/

	Rectangle R(0, 0, 2, 5);
	cout << R.area()<<endl;
	R.rotate90();
	cout << R << endl;

	Triangle T(1, 2, 3, 4, 5);
	cout << T.area() << endl;
	T.move(1,5);
	T.rotate90();
	cout << T<<endl;

	Circle c;
	cin >> c;
	cout << c<<endl;
	c.rotate90();
	c.move(6, 8);
	cout << c << endl;
	system("pause");
	return 0;
}