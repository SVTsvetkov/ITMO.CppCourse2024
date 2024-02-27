// Lab5_control_1.2(array_to_function).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int *func(int N, int a[]) {
     
    int min = 0; 
    int buf = 0; 
    for (int i = 0; i < N; i++) {
        min = i; 
        for (int j = i + 1; j < N; j++)
            min = (a[j] < a[min]) ? j : min;
        if (i != min) {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }   
    return a;
}

int main()
{
    const int N = 10;
    int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    func(N, a);
    for (int i : a)
        cout << i << '\t';
}


