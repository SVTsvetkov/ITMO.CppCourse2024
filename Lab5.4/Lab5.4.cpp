// Lab5.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void show_array(const int Arr[], const int N);

int main()
{
    int N;
    cout << "Enter size of myArray:  ";
    cin >> N;
    int* myArray = new int[N];

    cout << "Enter " << N << " values: "<<endl;
    
    for (int i = 0; i < N; i++) {

        std::cin
            >> myArray[i];
    }
    show_array(myArray, N);

    int min = 0; // ��� ������ ������������ ��������
    int buf = 0; // ��� ������ ����������
    for (int i = 0; i < N; i++)
    {
        min = i; // ����� ������� ������, ��� ������ � ����������� ���������
        // � ����� ������ �������� ����� ������ � ����������� ���������
        for (int j = i + 1; j < N; j++)
            min = (myArray[j] < myArray[min]) ? j : min;
        // ������������ ����� ��������, ������� ��� ������� � �������
        if (i != min)
        {
            buf = myArray[i];
            myArray[i] = myArray[min];
            myArray[min] = buf;
        }
    }
    show_array(myArray, N);
    delete[] myArray;
    return 0;
}

void show_array(const int Arr[], const int N)
{
    for (int i = 0; i < N; i++)
        cout << Arr[i] << " ";
       cout << "\n";
}

