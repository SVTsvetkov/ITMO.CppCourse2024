// Lab3_control_1(check_SNILS).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

bool checkSNILS(string snils)
{
    int multipl;
    int checksumm = 0;
    int k = 1;
    string str;

    for (int i = 0; i < snils.length(); i++) {
        if (snils[i] == ' ' || snils[i] == '-') {
            continue;
        }
        else {
            str.push_back(snils[i]);
        }
    }
    string cont = str.substr(9, 2);
    int control = stoi(cont);

    for (int i = 8; i > -1; i--) {
        multipl = (str[i] - '0') * k;
        checksumm += multipl;
        k++;
    }
    if ((checksumm == control && checksumm < 100) || ((checksumm == 100 || checksumm == 101) && control == 0)) {
        return true;
    }
    else if (checksumm > 101) {
        int rest = checksumm % 101;
        if ((rest < 100 && rest == control) || (rest == 100 && checksumm == 00)) {
            return true;
        }
    }   
    return false;
}

int main()
{
    string snils;
    cout << "Enter snils: " << endl;
    getline(cin, snils);
    checkSNILS(snils);
    cout << boolalpha << checkSNILS(snils) << endl;
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
