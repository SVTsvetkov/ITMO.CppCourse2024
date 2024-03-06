// Lab15_control_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct StudentGrade
{
    string name;
    char grade;
};

class GradeMap
{
private:
    vector<StudentGrade>m_map;
public:
    GradeMap()
    {
    }
	char& operator[](const string& name);
};

char& GradeMap::operator[](const string& name)
{
	for (StudentGrade& s : m_map)
	{	
		if (s.name == name)
			return s.grade;
	}	
	StudentGrade t{ name, ' ' };	
	m_map.push_back(t);	
	return m_map.back().grade;
}

int main()
{
	system("chcp 1251");
	GradeMap grades;
	grades["Иван"] = '5';
	grades["Петр"] = '4';
	cout << "Иван " << grades["Иван"] << '\n';
	cout << "Петр " << grades["Петр"] << '\n';
	return 0;
}

