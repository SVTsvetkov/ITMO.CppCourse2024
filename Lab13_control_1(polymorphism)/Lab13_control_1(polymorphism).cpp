// Lab13_control_1(polymorphism).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"
using namespace std;

int main()
{
	system("chcp 1251");
	// ��������������
	vector<int> scores;
	// ���������� ������ �������� � ������
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	student* stud = new student("������", "����", "����������", scores);
	/*cout << stud->get_full_name() << endl;
	cout << "������� ���� : " << stud->get_average_score() << endl;*/

	unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("�������", "�������", "���������", teacher_work_time);
	/*cout << tch->get_full_name() << endl;
	cout << "���������� �����: " << tch->get_work_time() << endl;*/

	human* h = new human("������", "����", "��������");

	vector<human*> humans = { stud, tch, h };

	for (human* h : humans) {
		cout << h->get_info() << endl;
	}

	return 0;
}

