#include "RownanieKwadratowe.h"
#include <math.h>
#include <list>
#include <iostream>


RownanieKwadratowe::RownanieKwadratowe(double defaultValue)
{
	a = defaultValue;
	b = defaultValue;
	c = defaultValue;
}

RownanieKwadratowe::RownanieKwadratowe(double a, double b, double c)
{
	a = a;
	b = b;
	c = c;
}

RownanieKwadratowe::RownanieKwadratowe(double* listWsp)
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

double RownanieKwadratowe ::get(WSPOLCZYNNIK wsp)
{
	switch (wsp) {

	case WSPOLCZYNNIK::A :

	{
		return a;

	}
	case WSPOLCZYNNIK::B :

	{
		return b;

	}
	case WSPOLCZYNNIK::C :

	{
		return c;

	}
	}
}

void RownanieKwadratowe ::set(WSPOLCZYNNIK wsp, const double& value)
{
	switch (wsp) {
	case WSPOLCZYNNIK::A :
	{
		a = value;

		break;
	}
	case WSPOLCZYNNIK::B :
	{
		b = value;

		break;
	}
	case WSPOLCZYNNIK::C :
	{
		c = value ;

		break;
	}
	}
}

void RownanieKwadratowe ::set(double* listWsp)
{
	a = listWsp[0];
	b = listWsp[1];
	c = listWsp[2];
}

void RownanieKwadratowe ::display()
{
	std::cout << "a: " <<a<< std::endl;
	std::cout << "b: " <<b<< std::endl;
	std::cout << "c: " <<c<< std::endl;
}

double RownanieKwadratowe ::delta()
{
	return (b * b) - (4 * a * c);
}

std::list<double> RownanieKwadratowe ::zeroPlaces()
{
	std::list<double> list;
	if (a!= 0) {
		double delta = this -> delta();
		if (delta > 0) {
			list.push_back((-b - sqrt(delta)) / (2 * a));
			list.push_back((-b + sqrt(delta)) / (2 * a));
		}
		else if (delta == 0) {
			list.push_back(-b / (a * c * 2));
		}
		else {
			
		}

	}
	return list;
}
