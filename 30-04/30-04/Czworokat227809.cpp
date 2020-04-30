#include "Czworokat227809.h"

Czworokat227809::Czworokat227809(const double a, const double b, const double c, const double d, const double alfa, const double beta, const double gamma, const double delta):Figura227809()
{	
	ileBokow = 4;
	ileKatow = 4;
	boki = new double[ileBokow];
	boki[0] = a;
	boki[1] = b;
	boki[2] = c;
	boki[3] = d;
	katy = new double[ileKatow];
	katy[0] = alfa;
	katy[1] = beta;
	katy[2] = gamma;
	katy[3] = delta;
}

Czworokat227809::~Czworokat227809()
{
}

double Czworokat227809::dajBok(int numer)
{
	return boki[numer - 1];
}

void Czworokat227809::ustawBok(int numer, double wartosc)
{
	boki[numer - 1] = wartosc;
}

double Czworokat227809::dajKat(int numer)
{
	return katy[numer - 1];
}

void Czworokat227809::ustawKat(int numer, double wartosc)
{
	katy[numer - 1] = wartosc;
}

double Czworokat227809::dajPole()
{
	double s = (this->dajObwod()) / 2;
	return sqrt((s-boki[0])*(s-boki[1])*(s-boki[2])*(s-boki[3])-((boki[0]*boki[1]*boki[2]*boki[3])*cos((katy[0]+katy[2])/2)*cos((katy[0] + katy[2]) / 2)));
}

double Czworokat227809::dajObwod()
{
	return boki[0]+boki[1]+boki[2]+boki[3];
}

string Czworokat227809::jakaFigura()
{
	return "Czworokat";
}
