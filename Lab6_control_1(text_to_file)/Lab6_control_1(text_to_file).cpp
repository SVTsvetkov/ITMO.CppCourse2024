// Lab6_control_1(text_to_file).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <fstream>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char fileName[80];
	char buffer[255]; 
	cout << "File name: ";
	cin >> fileName;
	ofstream fout(fileName);  
	cout << "Enter text for the file: ";
	cin.ignore(1, '\n');
	cin.getline(buffer, 255);
	fout << buffer << "\n";   
	fout.close(); 
	return 0;
}


