#include "RownanieKwadratowe.h"

#include <iostream>
#include "RownanieKwadratowe.h"
#include <math.h>

using namespace std;




RownanieKwadratowe::RownanieKwadratowe(double defaultValue)
{
	a, b, c = defaultValue;
}

RownanieKwadratowe::RownanieKwadratowe(double A, double B, double C)
{
	a = A;
	b = B;
	c = C;

	
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


double RownanieKwadratowe::  get(WSPOLCZYNNIK wsp)
{	
	if (wsp == RownanieKwadratowe::WSPOLCZYNNIK::A) return a;
	if (wsp == RownanieKwadratowe::WSPOLCZYNNIK::B) return b;
	if (wsp == RownanieKwadratowe::WSPOLCZYNNIK::C) return c;
	

}
void RownanieKwadratowe::set(WSPOLCZYNNIK wsp, const double& value)
{

	if (wsp == RownanieKwadratowe::WSPOLCZYNNIK::A) a = value;
	if (wsp == RownanieKwadratowe::WSPOLCZYNNIK::B) b = value;
	if (wsp == RownanieKwadratowe::WSPOLCZYNNIK::C) c = value;

}


void RownanieKwadratowe::set(double* listWsp)
{
	a = listWsp[0];
	b = listWsp[1];
	c = listWsp[2];

}

void RownanieKwadratowe::display()
{
	
	cout << "Wspolczynnik A: " << a << endl;
	cout << "Wspolczynnik B: " << b << endl;
	cout << "Wspolczynnik C: " << c << endl;
}

double RownanieKwadratowe::delta()
{

	return b * b - 4 * a*c;
}

list<double> RownanieKwadratowe::zeroPlaces()
{
	list<double> zerowe;
	double delta = b * b - 4 * a*c;
	
	if (delta == 0) {
		double x0 = -b / 2 * a;
		zerowe.push_front(x0);
	}
	else if (delta > 0) {
		double x1 = -b - sqrt(delta) / 2 * a;
		double x2 = -b + sqrt(delta) / 2 * a;
		zerowe.push_front(x1);
		zerowe.push_front(x2);
	}else{


	}

	return zerowe;
}
