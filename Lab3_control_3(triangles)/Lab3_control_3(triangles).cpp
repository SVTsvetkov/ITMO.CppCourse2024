// Lab3_control_3(triangles).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

double Triangles (double a)
{
    double p = a * 3 / 2;
    double s = sqrt(p * pow(p - a, 3));
    return s;
}

double Triangles (double a, double b, double c)
{
    double p = (a+b+c)/2;
    double s = sqrt(p * (p - a)*(p-b)*(p-c));
    return s;    
}

int main()
{
    double a, b,c;
    string str;
        cout << "Equil triangle ? y/n:  "; cin >> str;
    if (str == "y") {
        cout << "Equil triangle. Enter a: " << endl; cin >> a;        
        cout << "Area of equil triangle = " << Triangles(a) << endl;
    }
    else {
        cout << "Not equil triangle. Enter a, b, c: " << endl; cin >> a >> b >> c;
        cout << "Area of Not equil triangle  = " << Triangles(a,b,c) << endl;
    }
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
