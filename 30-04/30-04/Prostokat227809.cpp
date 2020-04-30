#include "Prostokat227809.h"

Prostokat227809::Prostokat227809(const double a, const double b):Rownoleglobok227809(a,b,90,90)
{
	ileBokow = 4;
	ileKatow = 4;
	boki = new double[ileBokow];
	boki[0] = a;
	boki[1] = b;
	boki[2] = a;
	boki[3] = b;
	katy = new double[ileKatow];
	katy[0] = 90;
	katy[1] = 90;
	katy[2] = 90;
	katy[3] = 90;
}

double Prostokat227809::dajPole()
{
	return boki[0]*boki[1];
}

double Prostokat227809::dajObwod()
{
	return boki[0] + boki[1] + boki[2] + boki[3];
}

string Prostokat227809::jakaFigura()
{
	return "Prostokat";
}

Prostokat227809::~Prostokat227809()
{

}
