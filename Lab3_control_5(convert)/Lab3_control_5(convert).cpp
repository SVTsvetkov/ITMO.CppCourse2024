// Lab3_control_5(convert).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void convert(const int num, string s, string &snum) {
	if (num % 2 == 0) {
		s += "0";
	}
	else {
		s += "1";
	}
	if ((num / 2) != 0) {
		convert(num / 2, s, snum);
	}
	else {
		for (int i = s.length(); i > -1; i--) {
			snum += s[i];
		}
	}		
		return;	
}

int main() {
	int num;
	string s, snum;
	cout << "Enter a decimal: ";
	cin >> num;
	convert(num, s, snum);
	cout << "Binary: " << snum << endl;
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
