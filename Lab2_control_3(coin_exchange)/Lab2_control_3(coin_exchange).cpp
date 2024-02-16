// Lab2_control_3(coin_exchange).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    system("chcp 1251");
    double a10 = 10;
    double a5 = 5;
    double a2 = 2;
    double a1 = 1;
    double b50 = 0.50;
    double b10 = 0.10;
    double b5 = 0.05;
    double b1 = 0.01;
    double x;
    double k;
    int count = 1;

    cout << "¬ведите сумму проверки:\n";
    cin >> x;
    
    for (int i = 0; i <= count; i++) {
        if ((x / a10) >= 1) {
            k = floor(x / a10);
            cout << "10-рублЄвых " << k << " монет " << endl;
            x = x - k * a10;         
        }
        else if ((x / a5) >= 1) {
            k = floor(x / a5);
            cout << "5-рублЄвых " << k << " монет " << endl;
            x = x - k * a5;
        }
        else if ((x / a2) >= 1) {
            k = floor(x / a2);
            cout << "2-рублЄвых " << k << " монет " << endl;
            x = x - k * a2;
        }
        else if ((x / a1) >= 1) {
            k = floor(x / a1);
            cout << "1-рублЄвых " << k << " монет " << endl;
            x = x - k * a1;
        }
        else if ((x / b50) >= 1) {
            k = floor(x / b50);
            cout << "50-копеечных " << k << " монет " << endl;
            x = x - k * b50;
        }
        else if ((x / b10) >= 1) {
            k = floor(x / b10);
            cout << "10-копеечных " << k << " монет " << endl;
            x = x - k * b10;
        }
        else if ((x / b5) >= 1) {
            k = floor(x / b5);
            cout << "5-копеечных " << k << " монет " << endl;
            x = x - k * b5;
        }
        else if ((x / b1) >= 1) {
            k = (x / b1);
            cout << "1-копеечных " << k << " монет " << endl;
            x = x - k * b1;
        }
        if (x > 0) {
            count++;
        }
        else {
            count;        
        }     
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
