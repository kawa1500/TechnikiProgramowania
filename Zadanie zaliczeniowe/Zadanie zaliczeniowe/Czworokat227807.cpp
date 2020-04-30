#include "Czworokat227807.h"

Czworokat227807::Czworokat227807(int bok1, int bok2, int bok3, int bok4, float kat1, float kat2, float kat3, float kat4)
{
	countOfSides = 4;
	countOfAngles = 4;
	sides = new int[countOfSides];
	sides[0] = bok1;
	sides[1] = bok2;
	sides[2] = bok3;
	sides[3] = bok4;
	angles = new double[countOfAngles];
	angles[0] = kat1;
	angles[1] = kat2;
	angles[2] = kat3;
	angles[3] = kat4;


}

double Czworokat227807::dajPole()
{
	return sides[0] * sides[1];
}

double Czworokat227807::dajObwod()
{
	return sides[0] + sides[1] + sides[2] + sides[3];
}

std::string Czworokat227807::jakaFigura()
{
	return "Czworokat";
}

Czworokat227807::~Czworokat227807()
{
	delete sides;
	delete angles;
}
void Czworokat227807::setBok(int nrBok, int value)
{
	sides[nrBok] = value;
}
void Czworokat227807::setKat(int nrBok, double value)
{
	angles[nrBok] = value;
}
int Czworokat227807::getBok(int nrBok)
{
	return sides[nrBok];
}
double Czworokat227807::getKat(int nrBok)
{
	return angles[nrBok];
}



