#pragma once
#include <iostream>
class Figura
{
protected:
	int countOfSide;
	double* sides;

public:
	Figura();
	~Figura();

	int getCountOfSide();
	virtual double getArea();
};

