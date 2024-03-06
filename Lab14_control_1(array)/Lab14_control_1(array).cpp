// Lab14_control_1(array).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;


template<class T>
double average_value(T arr[], int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	return (sum / size);
}

int main()
{
	int a[] = { 10, 5, 23, 7 };
	double avg_a = average_value(a, 4);
	cout << avg_a << endl;

	long b[] = { 22, 50, 46, 80 };
	double avg_b = average_value(b, 4);
	cout << avg_b << endl;

	double c[] = { 3.7, 5.2, 11.9, 23.5 };
	double avg_c = average_value(c, 4);
	cout << avg_c << endl;

	char d[] = { 'a', 'b', 'c', 'd' };
	double avg_d = average_value(d, 4);
	cout << avg_d << endl;
}
