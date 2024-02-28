// Lab7.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;

struct Distance
{
    int feet;
    double inches;
    void ShowDist()
    {
        cout << feet << "\'-" << inches << "\"\n";
    }
};

Distance InputDist()
{
    Distance d;
    cout << "\n¬ведите число футов: ";
    cin >> d.feet;
    cout << "¬ведите число дюймов: ";
    cin >> d.inches;
    return d;
}

void ShowDist(Distance d)
{
    cout << d.feet << "\'-" << d.inches << "\"\n";
}

Distance AddDist(Distance* masDist, int n)
{
    Distance d = masDist[0];
    for (int i = 1; i < n; i++)
    {
        d.feet += masDist[i].feet;
        d.inches += masDist[i].inches;
        if (d.inches >= 12.0)
        {
            d.inches -= 12.0;
            d.feet++;
        }
    }
    return d;
}

int main()
{
    system("chcp 1251");
    int n;
    cout << "¬ведите размер массива рассто€ний ";
    cin >> n;
    Distance * masDist = new Distance[n];
    for (int i = 0; i < n; i++)
    {
        masDist[i] = InputDist();
    }

    for (int i = 0; i < n; i++)
    {
        ShowDist(masDist[i]);
    }
    Distance s = AddDist(masDist, n);
    cout << "—умма" << endl;
    ShowDist(s);
    delete[] masDist;
}

