// Lab5.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251");
    const int n = 3;
    int mas[n];
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }
    //int s = 0;
    //for (int i = 0; i < n; i++)
    //{
    //    s += mas[i];
    //}
    //cout << "����� ���� ��������� �������: " << s << endl;
    //cout << "������� �������� ��������� �������: " << s / n << endl; 
   
    //int s1 = 0;
    //for (int i = 0; i < n; i++)
    //{
    //    if (mas[i] < 0) {
    //        s1 += mas[i];
    //    }            
    //}
    //cout <<"����� ������������� ��������� " << s1 << endl;
    //
    //int s2 = 0;   
    //for (int i = 0; i < n; i++)
    //{
    //    if (mas[i] > 0) {
    //        s2 += mas[i];
    //    }
    //}
    //cout << "����� ������������� ��������� " << s2 << endl;
    //
    //int s3 = 0;
    //for (int i = 1; i < n; i+=2) {        
    //     s3 += mas[i];        
    //}
    //cout << "����� ��������� � ����� ��������� " << s3 << endl;

    //int s4 = 0;
    //for (int i = 0; i < n; i+=2) {        
    //     s4 += mas[i];        
    //}
    //cout << "����� ��������� � ��� ��������� " << s4 << endl;

    int min = 0, max = 0;
    for (int i = 0; i < n; i++) {
        if (mas[i] > mas[max]) {
            max = i;             
        }   
        else if (mas[i] < mas[min]) {
            min = i;
        }
    }    
    cout << "������������ �������� �������: " << mas[max] << " � ��� ������ " << max << endl;
    cout << "����������� �������� �������: " << mas[min] << " � ��� ������ " << min << endl;

    int s5 = 1;
    for (int i = min; i <= max; i++) {        
        s5 = s5*mas[i];
    }
    cout << "������������ ��������� ������� ����� ����������: " << min << " � " << max << " = " << s5 <<endl;

    return 0;
}

