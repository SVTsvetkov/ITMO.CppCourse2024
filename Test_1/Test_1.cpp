// Test_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class A {
private:
    int* m_arr;
    int m_size;

public:   
    A(int size) {
        m_arr = new int[size];
        m_size = size;
    }

    A() {
        m_arr = new int[5];
        m_size = 5;
    }

    ~A() {
        delete[] m_arr;
    }

    A(const A& a) {
        m_size = a.m_size;
        m_arr = new int[m_size];
        for (int i = 0; i < m_size; i++)
        {
            m_arr[i] = a.m_arr[i];
        }
    }

    A& operator=(const A& a) {
        if (this != &a) { 
            delete[] m_arr; 

            m_size = a.m_size;
            m_arr = new int[m_size];
            for (int i = 0; i < m_size; i++)
            {
                m_arr[i] = a.m_arr[i];
            }
        }
        return *this;
    }

    int size() const {
        return m_size;
    }

    int operator[](int index) const {
        return m_arr[index];
    }
};

int main()
{
    A a1;
    A a2(10); //10 Ц размер массива 
    A a3 = a2;
    a1 = a3;
    a2 = A(20);
    const A a4(5);
    for (int i = 0; i < a2.size(); i++)
    {
        cout << a4[i];
    }
}

