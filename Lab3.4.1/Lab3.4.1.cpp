// Lab3.4.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;



int addNumders(int n)
{
    if (n == 1) return 1; // выход из рекурсии
    else return (n + addNumders(n - 1));
}

int addNumders(int n, int k)
{
    if (k == n) return n; // выход из рекурсии
    else return (k + addNumders(n,(k- 1)));
}

int main()
{
    int n;
    int k;
    cout << "n = "; cin >> n;
    cout << "k = "; cin >> k;
    /*addNumders(n);
    cout << "summ 1 from 1 till " << n << " = " << addNumders(n) << endl;*/
    cout << "summ 2 from " << n << " till " << k << " = " << addNumders(n, k) << endl;
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
