#pragma once
#include "Czworokat227807.h"
#include <string>
class Rownoleglobok227807 : public Czworokat227807
{

public:
	Rownoleglobok227807(int bok1, int bok2, float kat1, float kat2);
	~Rownoleglobok227807();
	void setAlfa(double kat);
	void setBeta(double kat);
	double getAlfa();
	double getBeta();

	void setA(int bok);
	void setB(int bok);
	int getA();
	int getB();

	virtual double dajPole();
	virtual double dajObwod();
	std::string jakaFigura();

};

