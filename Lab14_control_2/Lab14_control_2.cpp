// Lab14_control_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

template<class T>
void Print(const vector <T>& vec, const string & a)
{
    bool first = true;
    for (const auto& d : vec)     
    {
        if (!first) {
            cout << a;
        }
        else {
            first = false;
        }
        cout << d;
    }
    cout << "\n";
}

int main()
{
    vector<int> data = { 1, 2, 3 };
    Print(data, ", "); // на экране: 1, 2, 3
}

