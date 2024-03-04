// Lab11_control_2(sort_point_in_vector).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> // для алгоритма сортировки 
using namespace std;

class Point
{
public:
	Point();
	Point(double x1, double y1);
	double distance() const;
	friend ostream& operator<<(ostream& out, const Point& p);
	bool operator<(const Point& p);
private:
	double x, y;
};

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(double x1, double y1)
{
	x = x1;
	y = y1;
}

double Point::distance() const
{
	return sqrt(x * x + y * y);
}

bool Point::operator<(const Point& p)
{
	return distance() < p.distance();
}

int main()
{
	std::vector<Point> v;
	v.push_back(Point(1, 2));
	v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8));
	std::sort(v.begin(), v.end()); // требуется перегрузка оператора < для // класса Point 
	for (auto& point : v)
		std::cout << point << '\n'; // требуется перегрузка оператора << для // класса Point 
	return 0;
}

ostream& operator<<(ostream& out, const Point& p)
{
	out << "x = " << p.x << " , y = " << p.y;
	return out;
}

