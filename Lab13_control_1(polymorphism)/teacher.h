#include "human.h"
#include <string>
using namespace std;

class teacher : public human {
	// ����������� ������ teacher
public:
	teacher(string last_name, string name, string second_name,
		// ���������� ������� ����� �� ������� � �������������
		unsigned int work_time) : human(last_name, name,second_name) {
		this->work_time = work_time;
	}
	// ��������� ���������� ������� �����
	unsigned int get_work_time()
	{
		return this->work_time;
	}

	string get_info() override {
		return human::get_info() + ", ���-�� ������� ����� = " + to_string(work_time);
	}

private:
	// ������� ����
	unsigned int work_time;
};

