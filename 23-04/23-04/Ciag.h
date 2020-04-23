#pragma once
class Ciag
{
public:
	enum TYP { FIBONACI, EULER };
private:
	unsigned int getFibonaci(int n);
	unsigned int wynik;
	int index;
	unsigned int getEuler(int n);
	TYP typ;

public:
	int getIndex();
	unsigned int getWynik();
	unsigned int setCiag(int n);
	Ciag(TYP type, int n=1);
	~Ciag();
	unsigned int getSuma();
	
};

