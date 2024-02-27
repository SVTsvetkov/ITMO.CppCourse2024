// Lab5_control_4(parameters_to_program).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int calculate(char* argv[]) {
	int a = atoi(argv[2]);
	int b = atoi(argv[3]);
	int res;
	if (strncmp(argv[1], "-a", 2) == 0) {
		res = a + b;
	}
	else {
		res = a * b;
	}
	return res;
}

int main(int argc, char* argv[])
{
	if (argc != 4) {
		cout << "Incorrect count arguments";
		return 1;
	}

	if (strncmp(argv[1], "-a", 2) == 0 || strncmp(argv[1], "-m", 2) == 0) {
		int res = calculate(argv);
		cout << "Result = " << res;
	}
	else {
		cout << "Incorrect mode";
		return 2;
	}
	return 0;
}

