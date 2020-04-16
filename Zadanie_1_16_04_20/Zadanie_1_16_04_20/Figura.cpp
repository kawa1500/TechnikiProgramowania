#include "Figura.h"
#include <iostream>
Figura::Figura()
{
	countOfSide = 0;
	sides = nullptr;
	std::cout << "Konstruktor Figury" << std::endl;
}

Figura::~Figura()
{
	std::cout << "Destruktor Figury" << std::endl;
	delete sides;
}

int Figura::getCuntOfSides()
{
	return this->countOfSide;
}

double Figura::getArea()
{
	return 0.0;
}
