// Lab3_control_2(cube_root).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

double cubeRoot(double a)
{   
    return pow(a, 1.0 / 3);
}

double cubeRoot1(double a)
{
	double x1 = a;
	double x2 = 1;
	double b = 0.0001;
	int c = 100;

	for (int i = 0; i < c; i++) {
		if (abs(x1 - x2) > b) {
			x1 = x2;
			x2 = 1.0 / 3 * ((a / (x1 * x1) + 2.0 * x1));
		}
	}
	return x2;
}

int main()
{    
    double a;
    cout << "Enter a = "; cin >> a;
    cubeRoot(a);
	cubeRoot1(a);
    cout.precision(8);
    cout << "cube root   " << a << " = " << cubeRoot(a) << endl;
	cout << "cube root_1 " << a << " = " << cubeRoot1(a) << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
