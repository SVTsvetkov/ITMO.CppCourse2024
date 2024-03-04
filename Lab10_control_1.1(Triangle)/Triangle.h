#pragma once
#include "dot.h"
#include <iostream>
using namespace std;

class Triangle
{
private:
	Dot m_p1, m_p2, m_p3;

public:
	Triangle(double x1, double y1, double x2, double y2, double x3, double y3);
	void show_lenght();
	double perimeter();
	double area();
};
