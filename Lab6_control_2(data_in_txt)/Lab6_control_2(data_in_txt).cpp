// Lab6_control_2(data_in_txt).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

void ToFile(int N, int a[]) {
    ofstream myfile("test.txt", ios::out);
    for (int i = 0; i < N; i++) {
        myfile << a[i] << " ";
    }
    myfile << "\n";
    myfile.close();
}

void ToFileApp(int N, int a[]) {
    ofstream myfile("test.txt", ios::out | ios::app);
    for (int i = 0; i < N; i++) {
        myfile << a[i] << " ";
    }
    myfile.close();
}

int main()
{
    const int N = 10;
    int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    int min = 0;
    int buf = 0;
    ToFile(N, a);
    for (int i = 0; i < N; i++)
    {
        min = i;
        for (int j = i + 1; j < N; j++)
            min = (a[j] < a[min]) ? j : min;
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }
    for (int i : a)
        cout << i << '\t';
    ToFileApp(N, a);
}
    
 
