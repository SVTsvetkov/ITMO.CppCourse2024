#include "Triangle.h"

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
{
	m_p1 = Dot(x1, y1);
	m_p2 = Dot(x2, y2);
	m_p3 = Dot(x3, y3);
}

void Triangle::show_lenght()
{
	double a = m_p1.distanceTo(m_p2);
	double b = m_p1.distanceTo(m_p3);
	double c = m_p2.distanceTo(m_p3);

	cout << "сторона A = " << a << " ,сторона B = " << b << ", сторона C = " << c << endl;
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