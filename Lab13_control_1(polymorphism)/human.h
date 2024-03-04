#include <string>
#include <sstream>
#pragma once /* ������ �� �������� ����������� ������������� ����� */
using namespace std;

class human {
public:
	// ����������� ������ human
	human(string last_name, string name, string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	// ��������� ��� ��������
	string get_full_name()
	{
		ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}

	virtual string get_info() {
		return "���: " + get_full_name();
	}

private:
	string name; // ���
	string last_name; // �������
	string second_name; // ��������
};