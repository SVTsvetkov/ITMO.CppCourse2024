// Lab1.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main()
{
    system("chcp 1251");
    cout.precision(3);
    double x; //периметр
    cout << "Введите значение периметра:\n";
    cin >> x; // ввод с клавиатуры значения периметра
    double p = x / 2; //полупериметр
    double a = x / 3; //сторона
    double s = sqrt(p * pow(p - a, 3));
    cout << left << setw ( 15 ) << "Сторона" << left << setw(15) << "Площадь" << endl;
    cout << left<< setw(15) << a << left << setw(15) << s << endl;
    
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
