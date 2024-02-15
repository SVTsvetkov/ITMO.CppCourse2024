// Lab2_control_4(target shooting).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251");
    int shotsCount = 3;
    int score = 0;
    double x, y;
    string level;

    for(int i = 0; i < shotsCount; i++) {
        cout << "Введите координаты " << i+1 << "- го выстрела "  << " (x y): \n";
        cin >> x >> y;
        
        if (x * x + y * y < 1) {
            score += 10;
        }
        else if ((x * x + y * y > 1) && (x * x + y * y < 4)) {
            score += 5;
        }
        else {
            score += 0;
            }
            if (score >= 30) {
                level = "снайпер";
            }
            else if (score >= 15) {
                level = "просто стрелок";
            }
            else {
                level = "новичок";
            }
        }
    cout << "Вы набрали " << score << " очков и ваш уровень: " << level << endl;

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
