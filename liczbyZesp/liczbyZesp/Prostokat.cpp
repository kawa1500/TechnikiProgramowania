#include "Prostokat.h"

Prostokat::Prostokat(const double a, const double b)
{
	countOfSide = 4;
	sides = new double[countOfSide];
	sides[0] = a;
	sides[1] = b;
	sides[2] = a;
	sides[3] = b;

	std::cout << "Konstruktor Prostokat" << std::endl;
}

Prostokat::~Prostokat()
{
	std::cout << "Destruktor Prostokata" << std::endl;
}

double Prostokat::getArea()
{
	return sides[0]*sides[1];
}


