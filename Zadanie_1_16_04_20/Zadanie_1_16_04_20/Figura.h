#pragma once
class Figura
{
protected:
	int countOfSide;
	double* sides;


public:
	Figura();
	~Figura();
	int getCuntOfSides();
	virtual double getArea();

};

