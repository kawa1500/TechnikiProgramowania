#pragma once
#include "Czworokat227809.h"
class Rownoleglobok227809 :
	public Czworokat227809
{
public:
	Rownoleglobok227809(const double a, const double b, const double alfa, const double beta);
	~Rownoleglobok227809();

	double dajBok(int numer);
	void ustawBok(int numer, double wartosc);
	double dajKat(int numer);
	void ustawKat(int numer, double wartosc);

	virtual double dajPole();
	virtual double dajObwod();
	virtual string jakaFigura();

};

