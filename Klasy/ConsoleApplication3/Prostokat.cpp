#include "Prostokat.h"
#include <iostream>

Prostokat::Prostokat(const double a, double b)
{
	countOfSide = 4;
	sides = new double[4];
	sides[0] = a;
	sides[1] = b;
	sides[2] = a;
	sides[3] = b;
	std::cout << "Konstruktor Prostoakt" << std::endl;
}

Prostokat::~Prostokat()
{
	std::cout << "Destruktor Prostokat" << std::endl;
}

double Prostokat::getArea() 
{
	return sides[0] * sides[1];
}

