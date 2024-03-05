#pragma once
#include "dot.h"
#include <iostream>
using namespace std;

class Triangle
{
private:
	const Dot *m_p1, *m_p2, *m_p3;	

public:
	Triangle(const Dot& p1, const Dot& p2, const Dot& p3);
	void show_lenght() const;
	double perimeter() const;
	double area() const;
};
