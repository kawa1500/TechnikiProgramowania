#pragma once
#include "Figura.h"
class Prostokat :
	public Figura
{
public:
	Prostokat(const double a, const double b);
	~Prostokat();
	double getArea();
};

