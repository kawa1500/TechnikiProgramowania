#pragma once
#include <iostream>
#include <string>



class Figura227807
{
protected:
	int countOfAngles;
	int countOfSides;
	int* sides;
	double* angles;

public:
	Figura227807();
	~Figura227807();
	virtual double dajPole();
	virtual double dajObwod();
	std::string jakaFigura();

	bool operator == (const Figura227807 c);
	Figura227807& operator << (const Figura227807& c);


public:
	Figura227807* next;
};


