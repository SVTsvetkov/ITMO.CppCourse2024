// Lab5.5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int a, b, c;
    int k = 0;
    const int n = 10;
    int mas[n];

    vector<int> v1; 
    vector<int> v2;
  
    for (int i = 0; i < n; i++) {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        cout << a << " * " << b << " = ";
        cin >> c;
        mas[i] = c;
        /*if (a * b != c)
        {
            k++;
            cout << "Error! ";
            cout << a << " * " << b << " = " << a * b << endl;
        }*/
        if (a * b != c) {
            v2.push_back(c);
            k++;
        }
        else {
            v1.push_back(c);
        }

    }
    cout << "\nAll: " << endl;
    for (int i = 0; i < n; i++) {
        cout << mas[i] << endl;
    }
    cout << "\nGood: "; 
    for (int i = 0; i < v1.size(); i++) { 
        cout << v1[i] << endl; 
    } cout << "\nBad: "; 
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << endl;
    }
    
    return 0;


}

