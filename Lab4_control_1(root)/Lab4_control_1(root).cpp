// Lab4_control_1(root).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int Myroot(double a, double b, double c, double& x1, double& x2)
{
	double d;
	d = b * b - 4 * a * c; 

	if (d > 0) {
		x1 = ((-b) + sqrt(d)) / (2 * a);
		x2 = ((-b) - sqrt(d)) / (2 * a);
		return 1;		
	}
	else if (d == 0) {
		x1 = -(b / (2 * a));
		return 0;
	}
	else if (d < 0) {
		return -1;		
	}
}

int main()
{
	system("chcp 1251");
	double a, b, c, x1, x2;

	cout << "������� �������� a: ";
	cin >> a;
	cout << "������� �������� b: ";
	cin >> b;
	cout << "������� �������� c: ";
	cin >> c;

	switch (Myroot(a, b, c, x1, x2))
		{
		case 1:
			cout << "����� ��������� x1 = " << x1 << "; x2 = " << x2 << endl;
			break;
		case 0:
			cout << "������ ��������� ���� x1 = x2 = " << x1 << endl;
			break;
		case -1:
			cout << "������ ��������� ���" << endl;
			break;
		default:
			return 0;
		}
	return 0;
}
		


	
 



