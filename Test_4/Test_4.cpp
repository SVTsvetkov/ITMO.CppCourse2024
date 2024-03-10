// Test_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Stack {
private:
    static const int MAX_SIZE = 10;
    int m_arr[MAX_SIZE];
    int m_size;

public:
    Stack() {
        m_size = 0;
    }

    bool push(int data) {
        if (m_size < MAX_SIZE) {
            m_arr[m_size] = data;
            m_size++;
            return true;
        }
        else {
            cout << "Cтек полный" << endl;
            return false;
        }
    }

    void reset() {
        for (int i = 0; i < m_size; i++)
        {
            m_arr[i] = 0;
        }
        m_size = 0;
    }

    int pop() {
        if (m_size > 0) {
            int t = m_arr[m_size - 1];
            m_size--;
            return t;
        }
        else {
            cout << "Стек пустой" << endl;
        }
    }

    void print() {
        cout << "( ";
        for (int i = 0; i < m_size; i++)
        {
            cout << m_arr[i] << " ";
        }
        cout << ")";
        cout << endl;
    }
};

int main()
{
    Stack stack;
    stack.reset();
    stack.print();
    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();
    stack.pop();
    stack.print();
    stack.pop();
    stack.pop();
    stack.print();
    return 0;
}