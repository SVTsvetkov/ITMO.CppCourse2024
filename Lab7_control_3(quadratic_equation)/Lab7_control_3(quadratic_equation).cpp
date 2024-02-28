// Lab7_control_3(quadratic_equation).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <tuple>
using namespace std;

tuple<double, double, bool> Myroot(double a, double b, double c) {
	double d = b * b - 4 * a * c;
	bool check;
	double x1, x2;
	if (d > 0) {
		check = true;
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
	}
	else if (d == 0) {
		check = true;
		x1 = -b / (2 * a);
		x2 = x1;
	}
	else {
		check = false;
	}
	return tuple<double, double, bool> {x1, x2, check};
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

	tuple<double, double, bool> res = Myroot(a, b, c);
	if (get<2>(res)) {
		cout << "Корни уравнения x1 = " << get<0>(res) << "; x2 = " << get<1>(res) << endl;
	}
	else {
		cout << "Корней уравнения нет";
	}
}


