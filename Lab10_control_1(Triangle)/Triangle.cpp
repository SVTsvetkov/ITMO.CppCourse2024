#include "Triangle.h"

Triangle::Triangle(Dot p1, Dot p2, Dot p3)
{
	m_p1 = p1;
	m_p2 = p2;
	m_p3 = p3;
}

void Triangle::show_lenght()
{
	double a = m_p1.distanceTo(m_p2);
	double b = m_p1.distanceTo(m_p3);
	double c = m_p2.distanceTo(m_p3);

	cout << "сторона A = " << a << ", сторона B = " << b << ", сторона C = " << c << endl;
}

double Triangle::perimeter()
{
	double a = m_p1.distanceTo(m_p2);
	double b = m_p1.distanceTo(m_p3);
	double c = m_p2.distanceTo(m_p3);

	return a + b + c;
}

double Triangle::area()
{
	double a = m_p1.distanceTo(m_p2);
	double b = m_p1.distanceTo(m_p3);
	double c = m_p2.distanceTo(m_p3);
	double p = perimeter() / 2;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}