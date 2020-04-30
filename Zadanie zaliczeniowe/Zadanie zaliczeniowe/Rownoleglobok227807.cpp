#include "Rownoleglobok227807.h"
#include<math.h>

Rownoleglobok227807::Rownoleglobok227807(int bok1, int bok2, float kat1, float kat2):Czworokat227807(bok1, bok2, bok1, bok2, kat1, kat2, kat1, kat2)
{
	countOfSides = 2;
	countOfAngles = 2;
	sides = new int[countOfSides];
	sides[0] = bok1;
	sides[1] = bok2;
	angles = new double[countOfAngles];
	angles[0] = kat1;
	angles[1] = kat2;
}

Rownoleglobok227807::~Rownoleglobok227807()
{
	delete sides;
	delete angles;
}
void Rownoleglobok227807::setAlfa(double kat)
{
	angles[0] = kat;
}

void Rownoleglobok227807::setBeta(double kat)
{
	angles[1] = kat;
}
double Rownoleglobok227807::getAlfa()
{
	return angles[0];
}
double Rownoleglobok227807::getBeta()
{
	return angles[1];
}

void Rownoleglobok227807::setA(int bok)
{
	sides[0] = bok;
}
void Rownoleglobok227807::setB(int bok)
{
	sides[1] = bok;
}
int Rownoleglobok227807::getA()
{
	return sides[0];
}
int Rownoleglobok227807::getB()
{
	return sides[1];
}

 double Rownoleglobok227807::dajPole()
{
	 return sides[0] * sides[1] * sin(angles[0]);
}
 double Rownoleglobok227807::dajObwod()
{
	 return sides[0] * 2 + sides[1] * 2;
}

 std::string jakaFigura()
{
	return "Prostokat";
}