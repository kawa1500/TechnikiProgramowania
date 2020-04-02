#include "RownanieKwadratowe.h"
#include <iostream>
#include <list>
#include <math.h>

RownanieKwadratowe::RownanieKwadratowe(double defaultValue)
{
	this->a = defaultValue;
	this->b = defaultValue;
	this->c = defaultValue;
}

RownanieKwadratowe::RownanieKwadratowe(double a, double b, double c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

RownanieKwadratowe::RownanieKwadratowe(double* listWsp)
{
	this->a = listWsp[0];
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
{
}

double RownanieKwadratowe::get(WSPOLCZYNNIK wsp)
{
	switch (wsp) {
	case WSPOLCZYNNIK::A:
	{
		return this->a;
	}
	case WSPOLCZYNNIK::B:
	{
		return this->b;
	}
	case WSPOLCZYNNIK::C:
	{
		return this->c;
	}
	default: {
		return 0.0;
	}
	}
}

void RownanieKwadratowe::set(WSPOLCZYNNIK wsp, const double& value)
{
	switch (wsp) {
	case WSPOLCZYNNIK::A:
	{
		this->a = value;
		break;
	}
	case WSPOLCZYNNIK::B:
	{
		this->b = value;
		break;
	}
	case WSPOLCZYNNIK::C:
	{
		this->c = value;
		break;
	}
	default: {

	}
	}
}

void RownanieKwadratowe::set(double* listWsp)
{	
	this->a = listWsp[0];
	this->b = listWsp[0];
	this->c = listWsp[0];
}

void RownanieKwadratowe::display()
{
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
}

double RownanieKwadratowe::delta()
{
	return b * b - 4 * a * c;
}

std::list<double> RownanieKwadratowe::zeroPlaces()
{
	std::list<double> list;
	if (this->a != 0) {
		double delta = this->delta();
		if (delta < 0) {

		}
		else if (delta == 0) {
			list.push_back(-b / (2 * a * c));
		}
		else {
			list.push_back((-b - sqrt(delta)) / (2 * a));
			list.push_back((-b + sqrt(delta)) / (2 * a));
		}
	} else {
		list.push_back( -c / b);
	}

	return list;
}
