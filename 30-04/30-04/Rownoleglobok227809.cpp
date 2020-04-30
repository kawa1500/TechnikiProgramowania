#include "Rownoleglobok227809.h"

Rownoleglobok227809::Rownoleglobok227809(const double a, const double b, const double alfa, const double beta):Czworokat227809(a,b,0,0,alfa,beta,0,0)
{
	ileBokow = 4;
	ileKatow = 4;
	boki = new double[ileBokow];
	boki[0] = a;
	boki[1] = b;
	boki[2] = a;
	boki[3] = b;
	katy = new double[ileKatow];
	katy[0] = alfa;
	katy[1] = beta;
	katy[2] = alfa;
	katy[3] = beta;
}

double Rownoleglobok227809::dajBok(int numer)
{
	return boki[numer - 1];
}

void Rownoleglobok227809::ustawBok(int numer, double wartosc)
{
	if (numer == 1 || numer == 3) {
		boki[0] = wartosc;
		boki[2] = wartosc;
	}
	if (numer == 2 || numer == 4) {
		boki[1] = wartosc;
		boki[3] = wartosc;
	}
}

double Rownoleglobok227809::dajKat(int numer)
{
	return katy[numer - 1];
}

void Rownoleglobok227809::ustawKat(int numer, double wartosc)
{
	if (numer == 1 || numer == 3) {
		katy[0] = wartosc;
		katy[2] = wartosc;
	}
	if (numer == 2 || numer == 4) {
		katy[1] = wartosc;
		katy[3] = wartosc;
	}
}

double Rownoleglobok227809::dajPole()
{
	double s = (this->dajObwod()) / 2;
	return sqrt((s - boki[0]) * (s - boki[1]) * (s - boki[2]) * (s - boki[3]) - ((boki[0] * boki[1] * boki[2] * boki[3]) * cos((katy[0] + katy[2]) / 2) * cos((katy[0] + katy[2]) / 2)));
}

double Rownoleglobok227809::dajObwod()
{
	return boki[0] + boki[1] + boki[2] + boki[3];
}

string Rownoleglobok227809::jakaFigura()
{
	return "Rownoleglobok";
}

Rownoleglobok227809::~Rownoleglobok227809()
{

}
