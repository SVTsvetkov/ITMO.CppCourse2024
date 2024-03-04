#pragma once
#include "dot.h"
#include <iostream>
using namespace std;

class Triangle
{
private:
	Dot m_p1, m_p2, m_p3;

public:
	Triangle(Dot p1, Dot p2, Dot p3);
	void show_lenght();
	double perimeter();
	double area();
};
