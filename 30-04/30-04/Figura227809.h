#pragma once
#include <string>
#include <iostream>
using namespace std;
class Figura227809
{
protected:
	int ileBokow;
	int ileKatow;
	double* boki;
	double* katy;

public:
	Figura227809();
	~Figura227809();
	Figura227809* next;
	virtual double dajPole();
	virtual double dajObwod();
	virtual string jakaFigura();

	friend std::ostream& operator<<(std::ostream& os, Figura227809& f);
	bool operator == (const Figura227809& f);

};

