// Lab5.5.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL)); 
    int a, b, c; 
    int k = 0;
    const int n = 10; 
    int mas[n];

    for (int i = 0; i < n; i++) {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        cout << a << " * " << b << " = ";
        cin >> c; 
        mas[i] = c;
        if (a * b != c)
        {
            k++; 
            cout << "Error! ";
            cout << a << " * " << b << " = " << a * b << endl;
        }
    }
    cout << "\nAll: "; 
    for (int i = 0; i < n; i++) { 
        cout << mas[i] << endl; 
    }
    cout << "Count error: " << k << endl;
    return 0;
}

