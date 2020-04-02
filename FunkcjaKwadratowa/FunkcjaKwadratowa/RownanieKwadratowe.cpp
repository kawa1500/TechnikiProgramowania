#include "RownanieKwadratowe.h"
#include <iostream>
#include <list>
#include <math.h>
using namespace std;
RownanieKwadratowe::RownanieKwadratowe(double defaultValue)
{
	this->a = defaultValue;
	this->b = defaultValue;
	this->c = defaultValue;
}
RownanieKwadratowe::RownanieKwadratowe(double A, double B, double C)
{	a = A;
	b = B;
	c = C;
	}
RownanieKwadratowe::RownanieKwadratowe(double* listWsp)
{	this->a = listWsp[0];
	this->b = listWsp[1];
	this->c = listWsp[2];
}
RownanieKwadratowe::RownanieKwadratowe(const RownanieKwadratowe& copy)
{
	a = copy.a;
	b = copy.b;
	c = copy.c;
}

RownanieKwadratowe::~RownanieKwadratowe()
{}
double RownanieKwadratowe::get(WSPOLCZYNNIK wsp)
{	if (wsp == RownanieKwadratowe::WSPOLCZYNNIK::A) return a;
	if (wsp == RownanieKwadratowe::WSPOLCZYNNIK::B) return b;
	if (wsp == RownanieKwadratowe::WSPOLCZYNNIK::C) return c;
	}
void RownanieKwadratowe::set(WSPOLCZYNNIK wsp, const double& value)
{	if (wsp == RownanieKwadratowe::WSPOLCZYNNIK::A) a = value;
	if (wsp == RownanieKwadratowe::WSPOLCZYNNIK::B) b = value;
	if (wsp == RownanieKwadratowe::WSPOLCZYNNIK::C) c = value;
	}
void RownanieKwadratowe::set(double* listWsp)
{	a = listWsp[0];
	b = listWsp[1];
	c = listWsp[2];
	}
void RownanieKwadratowe::display()
{
	cout << "Wspolczynnik A wynosi: " << a << endl;
	cout << "Wspolczynnik B wynosi: " << b << endl;
	cout << "Wspolczynnik C wynosi: " << c << endl;
}
double RownanieKwadratowe::delta()
{	return (b * b) - 4 * a * c;
}
list<double> RownanieKwadratowe::zeroPlaces()
{
	list<double> MiejscaZerowe;
	double delta = (b * b) - 4 * a * c;
		if (delta > 0) {
		double x2 = -b - sqrt(delta) / (2 * a);
		double x1 = -b + sqrt(delta) / (2 * a);
		MiejscaZerowe.push_front(x1);
		MiejscaZerowe.push_front(x2);	}

		if (delta == 0) {
			double x = -b / 2 * a;
			MiejscaZerowe.push_front(x);
		}
		return MiejscaZerowe;
}