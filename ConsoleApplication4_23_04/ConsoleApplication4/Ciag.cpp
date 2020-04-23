#include "Ciag.h"
#include <math.h>
#include <iostream>


unsigned int Ciag::getFibonaci(int n)
{
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return getFibonaci(n - 1) + getFibonaci(n - 2);
}

unsigned int Ciag::getEuler(int n)
{
	unsigned int liczba = n * n - n + 41;
	return liczba;

}


Ciag::Ciag(TYP type, int n) {
	typ = type;
	index = n;
	
	if (type == Ciag::FIBONACI) 
	{
		std::cout << "Ciag fibo: " << getFibonaci(n) << std::endl;
		wynik = getFibonaci(n);
	}
	else if (type == Ciag::EULER) {
		std::cout << "Ciag Euler: " << getEuler(n) << std::endl;
		wynik = getEuler(n);
	}
	
	
	

}

int Ciag :: getIndex()
{
	return index;
}

unsigned int Ciag::getWynik() 
{
	return wynik;
}

unsigned int Ciag::setCiag(int n) 
{
	if (typ == Ciag::FIBONACI)
	{
		wynik = getFibonaci(n);
	}
	else if (typ == Ciag::EULER)
	{
		wynik = getEuler(n);
	}

	index = n;
	return wynik;
}

unsigned int Ciag::getSuma()
{
	unsigned int suma = 0;
	for (int i = index; i >= 0; i--)
	{
		if (typ == Ciag::FIBONACI) suma += getFibonaci(i);
		else if (typ == Ciag::EULER) suma += getEuler(i);
	}
	return suma;

}

Ciag::~Ciag() 
{

}