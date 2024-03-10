// Test_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
    Point() {
        x = 0;
        y = 0;
    }

    Point operator+(const Point& p) {
        return Point(x + p.x, y + p.y);
    }

    Point& operator+=(const Point& p) {
        x += p.x;
        y += p.y;
        return *this;
    }

    Point operator+(int k) {
        return Point(x + k, y + k);
    }

    void show() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main()
{
    Point pt1(1, 1), pt2(2, 2), pt3;
    pt3 = pt1 + pt2;
    pt3.show();
    pt2 += pt1;
    pt3 = pt1 + 5;

    pt3.show();
    pt2.show();
}