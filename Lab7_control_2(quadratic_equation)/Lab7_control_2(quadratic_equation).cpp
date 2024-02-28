// Lab7_control_2(quadratic_equation).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

struct root
{
	double x1;
	double x2;
	int count;
};

root Myroot(double a, double b, double c) {
	double d = b * b - 4 * a * c;
	root res;
	if (d > 0) {
		res.count = 2;
		res.x1 = (-b + sqrt(d)) / (2 * a);
		res.x2 = (-b - sqrt(d)) / (2 * a);
	}
	else if (d == 0) {
		res.count = 1;
		res.x1 = -b / (2 * a);
	}
	else {
		res.count = 0;
	}
	return res;
}

int main()
{
	system("chcp 1251");
	double a, b, c;
	cout << "Введите значение a: ";
	cin >> a;
	cout << "Введите значение b: ";
	cin >> b;
	cout << "Введите значение c: ";
	cin >> c;

	root res = Myroot(a, b, c);
	if (res.count == 2) {
		cout << "Корни уравнения x1 = " << res.x1 << "; x2 = " << res.x2 << endl;
	}
	else if (res.count == 1) {
		cout << "Корень уравнения один x1 = x2 = " << res.x1;
	}
	else {
		cout << "Корней уравнения нет";
	}
}


