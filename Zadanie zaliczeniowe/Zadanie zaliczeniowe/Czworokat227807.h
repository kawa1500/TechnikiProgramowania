#pragma once
#include "Figura227807.h"
class Czworokat227807 : public Figura227807
{


public:
	Czworokat227807(int bok1, int bok2, int bok3, int bok4, float kat1, float kat2, float kat3, float kat4);
	~Czworokat227807();
	void setBok(int nrBok, int value);
	void setKat(int nrBok, double value);
	int getBok(int nrBok);
	double getKat(int nrBok);

public:
	virtual double dajPole();
	virtual double dajObwod();
	std::string jakaFigura();
};

