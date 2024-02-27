// Lab5_control_3(transposition).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int Search(int* a, int N, int key) {
    int index = -1;

    for (int i = 0; i < N; i++) {
        if (a[i] == key) {
            index = i;

            if (index != 0) {
                swap(a[i], a[i - 1]);
            }
            break;
        }
    }
    return index;
}

int main() {
    const int N = 10;
    int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 9, 55 };   
        int key;
        cout << "Enter key: ";
        cin >> key;
        int index = Search(a, N, key);
        if (index != -1) {
            cout << "Number " << key << " has index " << index << endl;
        }
        else {
            cout << "Number " << key << " not found" << endl;
        }
        for (int i = 0; i < N; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    return 0;
}



