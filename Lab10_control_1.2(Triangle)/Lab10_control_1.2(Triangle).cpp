// Lab10_control_1.2(Triangle).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Triangle.h"
using namespace std;

int main()
{
	system("chcp 1251");
	double x1, y1, x2, y2, x3, y3;
	cout << "enter x1, y1, x2, y2, x3, y3 \n";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	
	Dot p1(x1, y1);
	Dot p2(x2, y2);
	Dot p3(x3, y3);

	Triangle tr(p1, p2, p3);
	tr.show_lenght();
	double p = tr.perimeter();
	cout << "периметр P = " << p << endl;
	double s = tr.area();
	cout << "площадь S = " << s << endl;

}

