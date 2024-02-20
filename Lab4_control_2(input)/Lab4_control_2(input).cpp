// Lab4_control_2(input).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


bool Input(int& a, int& b)
{
    system("chcp 1251");
    cout << "¬ведите число a: "; cin >> a;    

    if (cin.fail()) {
        return false;
    }
    else {
        cout << "¬ведите число b: "; cin >> b;
        if (cin.fail()) {
            return false;
        }
        else {
            return true;
        }
    }
}
int main()
{
     int a, b;
     if (Input(a, b) == false) {
         cerr << "error";
         return 1;
     }
     else {
         int s = a + b;
         cout << a << " + " << b << " = " << s;            
     }
     return 0;
}





