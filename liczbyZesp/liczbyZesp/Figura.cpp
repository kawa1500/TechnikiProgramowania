#include "Figura.h"

Figura::Figura()
{
	countOfSide = 0;
	sides = nullptr;
	std::cout << "Konstruktor Figury" << std::endl;
}

Figura::~Figura()
{
	delete sides;
	std::cout << "Destruktor Figury" << std::endl;
}

int Figura::getCountOfSide()
{
	return this->countOfSide;
}

double Figura::getArea()
{
	return 0.0;
}


