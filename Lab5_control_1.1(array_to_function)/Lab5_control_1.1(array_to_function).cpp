// Lab5_control_1.1(array_to_function).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int func(int n, int mas[], int& s, int& s1, int& s2, int& s3, int& s4) {

    for (int i = 0; i < n; i++)
    {
        s += mas[i];

        if (mas[i] < 0) {
            s1 += mas[i];
        }
        if (mas[i] > 0) {
            s2 += mas[i];
        }
    }
    for (int i = 1; i < n; i += 2) {
        s3 += mas[i];
    }
    for (int i = 0; i < n; i += 2) {
        s4 += mas[i];
    }
    return s;
    return s1;
    return s2;
    return s3;
    return s4;
}

int main()
{
    system("chcp 1251");
    const int n = 4;
    int mas[n];
    int s = 0; int s1 = 0;
    int s2 = 0; int s3 = 0; int s4 = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }
    func(n, mas, s, s1, s2, s3, s4);
    cout << "сумму всех элементов массива: " << s << endl;
    cout << "среднее значение элементов массива: " << s / n << endl;
    cout << "сумма отрицательных элементов " << s1 << endl;
    cout << "сумма положительных элементов " << s2 << endl;
    cout << "сумма элементов с нечет индексами " << s3 << endl;
    cout << "сумма элементов с чет индексами " << s4 << endl;
}

