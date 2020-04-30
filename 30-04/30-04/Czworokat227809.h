#pragma once
#include "Figura227809.h"
class Czworokat227809 :
	public Figura227809
{
public:
	Czworokat227809(const double a, const double b, const double c, const double d, const double alfa, const double beta, const double gamma, const double delta);
	~Czworokat227809();
	double dajBok(int numer);
	void ustawBok(int numer, double wartosc);
	double dajKat(int numer);
	void ustawKat(int numer, double wartosc);

	virtual double dajPole();
	virtual double dajObwod();
	virtual string jakaFigura();

};

