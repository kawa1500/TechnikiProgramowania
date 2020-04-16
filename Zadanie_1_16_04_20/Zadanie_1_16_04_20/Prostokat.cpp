#include "Prostokat.h"
#include <iostream>
Prostokat::Prostokat(const double a, const double b)
{

	sides = new double[4];
	sides[0] = a;
	sides[1] = b;
	sides[2] = a;
	sides[3] = b;
	this->countOfSide = sizeof(sides);
	std::cout << "Konstruktor Prostok¹da" << std::endl;
}

double Prostokat::getArea()
{
	return sides[0] * sides[1];
}
