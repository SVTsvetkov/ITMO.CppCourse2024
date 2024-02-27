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

    int min = 0; // дл€ записи минимального значени€
    int buf = 0; // дл€ обмена значени€ми
    for (int i = 0; i < N; i++)
    {
        min = i; // номер текущей €чейки, как €чейки с минимальным значением
        // в цикле найдем реальный номер €чейки с минимальным значением
        for (int j = i + 1; j < N; j++)
            min = (myArray[j] < myArray[min]) ? j : min;
        // перестановка этого элемента, помен€в его местами с текущим
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

