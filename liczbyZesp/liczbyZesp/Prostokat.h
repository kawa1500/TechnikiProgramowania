#pragma once
#include "Figura.h"
#include <iostream>
class Prostokat :
	public Figura
{
public:
	Prostokat(const double a, const double b);
	~Prostokat();
	virtual double getArea();

};

