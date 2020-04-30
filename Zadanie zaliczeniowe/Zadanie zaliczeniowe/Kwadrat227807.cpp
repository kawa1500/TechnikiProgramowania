#include "Kwadrat227807.h"

Kwadrat227807::Kwadrat227807(int bok) : Prostokat227807(bok,bok)
{
	countOfSides = 1;
	countOfAngles = 1;
	sides = new int[countOfSides];
	sides[0] = bok;
	angles = new double[countOfAngles];
	angles[0] = 90;
}
Kwadrat227807::~Kwadrat227807()
{
	delete sides;
	delete angles;
}
double Kwadrat227807::dajPole()
{
	return sides[0] * sides[0];
}
double Kwadrat227807::dajObwod()
{
	return 4 * sides[0];
}
std::string Kwadrat227807::jakaFigura()
{
	return "Kwadrat";
}