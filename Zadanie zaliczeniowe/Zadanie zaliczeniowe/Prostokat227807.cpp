#include "Prostokat227807.h"


Prostokat227807::Prostokat227807(int bok1, int bok2):Rownoleglobok227807(bok1, bok1,90,90)
{
	countOfSides = 2;
	countOfAngles = 2;
	sides = new int[countOfSides];
	sides[0] = bok1;
	sides[1] = bok2;
	angles = new double[countOfAngles];
	angles[0] = 90;
	angles[1] = 90;
}
Prostokat227807::~Prostokat227807()
{
	delete sides;
	delete angles;
}

double Prostokat227807::dajPole()
{
	return sides[0] * sides[1];
}
double Prostokat227807::dajObwod()
{
	return sides[0] * 2 + sides[1] * 2;
}
std::string Prostokat227807::jakaFigura()
{
	return "Prostokat";
}