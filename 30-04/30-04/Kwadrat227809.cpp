#include "Kwadrat227809.h"



double Kwadrat227809::dajPole()
{
	return boki[0] * boki[0];
}

double Kwadrat227809::dajObwod()
{
	return 4*boki[0];
}

string Kwadrat227809::jakaFigura()
{
	return "Kwadrat";
}

void Kwadrat227809::ustawBok(double wartosc)
{
	boki[0] = wartosc;
	boki[1] = wartosc;
	boki[2] = wartosc;
	boki[3] = wartosc;
}

Kwadrat227809::Kwadrat227809(const double a):Prostokat227809(a,a)
{
	ileBokow = 4;
	ileKatow = 4;
	boki = new double[ileBokow];
	boki[0] = a;
	boki[1] = a;
	boki[2] = a;
	boki[3] = a;
	katy = new double[ileKatow];
	katy[0] = 90;
	katy[1] = 90;
	katy[2] = 90;
	katy[3] = 90;
}

Kwadrat227809::~Kwadrat227809()
{

}
