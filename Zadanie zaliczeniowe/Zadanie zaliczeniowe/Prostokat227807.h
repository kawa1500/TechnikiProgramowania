#pragma once
#include "Rownoleglobok227807.h"
#include <string>
class Prostokat227807 : public Rownoleglobok227807
{


public:
	Prostokat227807(int bok1, int bok2);
	~Prostokat227807();
	virtual double dajPole();
	virtual double dajObwod();
	std::string jakaFigura();
};

