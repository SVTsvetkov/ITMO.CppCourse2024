// Lab1_control.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main()
{
    system("chcp 1251");
    cout.precision(3);
    double x1,x2,x3,x4,x5,y1,y2,y3,y4,y5; //координаты вершин
   
    cout << "¬ведите x1:\n";
    cin >> x1; 
    cout << "¬ведите y1:\n";
    cin >> y1;
    cout << "¬ведите x2:\n";
    cin >> x2;
    cout << "¬ведите y2:\n";
    cin >> y2;
    cout << "¬ведите x3:\n";
    cin >> x3;
    cout << "¬ведите y3:\n";
    cin >> y3;
    cout << "¬ведите x4:\n";
    cin >> x4;
    cout << "¬ведите y4:\n";
    cin >> y4;
    cout << "¬ведите x5:\n";
    cin >> x5;
    cout << "¬ведите y5:\n";
    cin >> y5;
    double S = fabs(x1 * y2 + x2 * y3 + x3 * y4 + x4*y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5) / 2;
    cout << "ѕлощадь п€тиугольника = " << S << endl;

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
