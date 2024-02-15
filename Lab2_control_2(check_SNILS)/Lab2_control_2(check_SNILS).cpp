// Lab2_control_2(check_SNILS).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;



int main()
{
    system("chcp 1251"); 
    string snils;    
    int multipl;
    int checksumm = 0;
    int k = 1;

    cout << "Ââåäèòå íîìåð ÑÍÈËÑ: \n";
    getline(cin, snils);

    string cont = snils.substr(9, 2);
    int control = stoi(cont);
    
    for (int i = 8; i > -1; i--) {        
        multipl = (snils[i] - '0')*k;
        checksumm += multipl;
        k++;        
    }
    
    if (checksumm == control && checksumm < 100) {
        cout << "True" << endl;
    }
    else if ((checksumm == 100 || checksumm == 101) && control == 0){
        cout << "True" << endl;
           }
    else if (checksumm > 101) {
        int rest = checksumm % 101;        
        if (rest < 100 && rest == control) {
            cout << "True" << endl;
        }
        else if (rest == 100 && checksumm == 00) {
            cout << "True" << endl;
        }
        else {
            cout << "False" << endl;
        }
    }
    else  {
        cout << "False" << endl;
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
