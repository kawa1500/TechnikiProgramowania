#include "RownanieKwadratowe1.h"
#include <iostream>
#include <math.h>

using namespace std;




RownanieKwadratowe1::RownanieKwadratowe1(double defaultValue)
{
	a, b, c = defaultValue;
}

RownanieKwadratowe1::RownanieKwadratowe1(double A, double B, double C)
{
	a = A;
	b = B;
	c = C;


}

RownanieKwadratowe1::RownanieKwadratowe1(double* listWsp)
{
	a = listWsp[0];
	b = listWsp[1];
	c = listWsp[2];
}





RownanieKwadratowe1::RownanieKwadratowe1(const RownanieKwadratowe1& copy)
{
	a = copy.a;
	b = copy.b;
	c = copy.c;
}

RownanieKwadratowe1::~RownanieKwadratowe1()
{

}


double RownanieKwadratowe1::get(WSPOLCZYNNIK wsp)
{
	if (wsp == RownanieKwadratowe1::WSPOLCZYNNIK::A) return a;
	if (wsp == RownanieKwadratowe1::WSPOLCZYNNIK::B) return b;
	if (wsp == RownanieKwadratowe1::WSPOLCZYNNIK::C) return c;


}
void RownanieKwadratowe1::set(WSPOLCZYNNIK wsp, const double& value)
{

	if (wsp == RownanieKwadratowe1::WSPOLCZYNNIK::A) a = value;
	if (wsp == RownanieKwadratowe1::WSPOLCZYNNIK::B) b = value;
	if (wsp == RownanieKwadratowe1::WSPOLCZYNNIK::C) c = value;

}


void RownanieKwadratowe1::set(double* listWsp)
{
	a = listWsp[0];
	b = listWsp[1];
	c = listWsp[2];

}

void RownanieKwadratowe1::display()
{

	cout << "Wspolczynnik A: " << a << endl;
	cout << "Wspolczynnik B: " << b << endl;
	cout << "Wspolczynnik C: " << c << endl;
}

double RownanieKwadratowe1::delta()
{

	return b * b - 4 * a * c;
}

list<double> RownanieKwadratowe1::zeroPlaces()
{
	list<double> zerowe;
	double delta = b * b - 4 * a * c;

	if (delta == 0) {
		double x0 = -b / 2 * a;
		zerowe.push_front(x0);
	}
	else if (delta > 0) {
		double x1 = -b - sqrt(delta) / 2 * a;
		double x2 = -b + sqrt(delta) / 2 * a;
		zerowe.push_front(x1);
		zerowe.push_front(x2);
	}
	else {


	}

	return zerowe;
}