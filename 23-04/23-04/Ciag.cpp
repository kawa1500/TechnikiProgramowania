#include "Ciag.h"
#include <iostream>

unsigned int Ciag::getFibonaci(int n)
{
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return getFibonaci(n - 1) + getFibonaci(n - 2);
}

unsigned int Ciag::getEuler(int n)
{
	return n*n-n+41;
}

int Ciag::getIndex()
{
	return index;
}

unsigned int Ciag::getWynik()
{
	return wynik;
}

unsigned int Ciag::setCiag(int n)
{
	index = n;
	if (typ==0)	wynik = getFibonaci(n);
	if (typ == 1) wynik = getEuler(n);
	return getWynik();
}

Ciag::Ciag(TYP type, int n)
{
	index = n;
	typ = type;
	wynik = setCiag(n);
}

Ciag::~Ciag()
{
}

unsigned int Ciag::getSuma()
{	
	int suma = 0;
	int ind = index;
	for (int i = 0; i <= ind; i++) {
		suma += setCiag(i);
	}
	index = ind;
	return suma;
}
