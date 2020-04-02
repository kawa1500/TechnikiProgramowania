#include "RownanieKwadratowe.h"
#include <iostream>
#include <list>

RownanieKwadratowe::RownanieKwadratowe(double defaultValue)
{
	a = defaultValue;
	b = defaultValue;
	c = defaultValue;
}

RownanieKwadratowe::RownanieKwadratowe(double a, double b, double c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

RownanieKwadratowe::RownanieKwadratowe(double *listWsp)
{
	a = listWsp[0];
	b = listWsp[1];
	c = listWsp[2];
}

RownanieKwadratowe::RownanieKwadratowe(const RownanieKwadratowe& copy)
{
	a = copy.a;
	b = copy.b;
	c = copy.c;
}

RownanieKwadratowe::~RownanieKwadratowe()
{
}

double RownanieKwadratowe::get(WSPOLCZYNNIK wsp)
{
	if (wsp == WSPOLCZYNNIK::A) return a;
	if (wsp == WSPOLCZYNNIK::B) return b;
	if (wsp == WSPOLCZYNNIK::C) return c;

}

void RownanieKwadratowe::set(WSPOLCZYNNIK wsp, const double& value)
{
	if (wsp == WSPOLCZYNNIK::A) a = value;
	if (wsp == WSPOLCZYNNIK::B) b = value;
	if (wsp == WSPOLCZYNNIK::C) c = value;
}

void RownanieKwadratowe::set(double* listWsp)
{
	a = listWsp[0];
	b = listWsp[1];
	c = listWsp[2];
}

void RownanieKwadratowe::display()
{
	std::cout << "a: " << a << ", b: " << b << ", c: " << c <<std::endl;
}

double RownanieKwadratowe::delta()
{
	return ((b*b)-4*a*c);
}

std::list<double> RownanieKwadratowe::zeroPlaces()
{
	double delta = RownanieKwadratowe::delta();
	std::list<double> lista;
	if (a == 0.0) {
		lista.push_back(-c / b);
	}
	else
	{
		if (delta > 0) {
			lista.push_back(((-b + sqrt(delta)) / 2 / a));
			lista.push_back(((-b - sqrt(delta)) / 2 / a));
		}
		if (delta == 0) {
			lista.push_back((-b / 2 / a));
		}
	}
	return lista;
}
