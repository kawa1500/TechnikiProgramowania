#pragma once
#include "Prostokat227809.h"
class Kwadrat227809 :
	public Prostokat227809
{
public:
	Kwadrat227809(const double a);
	~Kwadrat227809();

	virtual double dajPole();
	virtual double dajObwod();
	virtual string jakaFigura();

	void ustawBok(double wartosc);
};

