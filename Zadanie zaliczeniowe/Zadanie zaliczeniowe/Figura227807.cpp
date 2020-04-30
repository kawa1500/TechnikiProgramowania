#include "Figura227807.h"
#include <iostream>
#include <string>

Figura227807::Figura227807()
{
	countOfAngles = 0;
	countOfSides = 0;
	sides = nullptr;
	angles = nullptr;
	next = nullptr;

}

Figura227807::~Figura227807()
{
	delete sides;
	delete angles;
}

double Figura227807::dajPole()
{
	return 0.0;
}

double Figura227807::dajObwod()
{
	return 0.0;
}

std::string Figura227807::jakaFigura()
{
	return "";
}

bool Figura227807:: operator == (const Figura227807 c)
{
	return ((this->sides == c.sides) && (this->angles == c.angles));
	
}
Figura227807& Figura227807::operator << (const Figura227807& c)
{
	this->sides = c.sides;
	this->angles = c.angles;
	return *this;
}

