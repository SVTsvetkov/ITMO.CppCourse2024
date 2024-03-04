// Lab9_control_1(Triangle).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

class Triangle {
private:
	double at;
	double bt;
	double ct;

public:
	class ExSide //класс исключений
	{
	public:		
		ExSide() : message("ввод недопустимой длины сторон") { }
		void printMessage() const
		{
			cout << message << endl;
		}
	private: string message;
	};

	Triangle(double a, double b, double c) {
		if (a + b > c && a + c > b && b + c > a) {
			at = a;
			bt = b;
			ct = c;
		}
		else {
			throw ExSide ();
		}
	}
	double area() {
		double p = (at + bt + ct) / 2;
		double s = sqrt(p * (p - at) * (p - bt) * (p - ct));
		return s;
	}
};

int main()
{
	system("chcp 1251");
	double a, b, c;
	try
	{
		cout << "a = "; cin >> a;
		cout << "b = "; cin >> b;
		cout << "c = ";	cin >> c;
		Triangle tr( a, b, c);
		cout << "Площадь треугольника: " << tr.area();
	}
	catch (Triangle::ExSide& ex)
	{
		cout << "ОШИБКА: ";
		ex.printMessage();
	}
}


