#pragma once
class Ciag
{

public:
	enum TYP{FIBONACI, EULER};
	unsigned int getWynik(); //wynik 
	unsigned int setCiag(int n); //
	unsigned int getSuma();//zwraca sume ciagu
	int getIndex();
	Ciag(TYP type, int n = 1);//wywolujemy funkcje getfibonaci i wyswietlamy jej w konsloi. wynik funkcji przypisac do zmiennej wynik
	~Ciag();

private:
	TYP typ;
	unsigned int wynik;
	int index;
	unsigned int getFibonaci(int n);
	unsigned int getEuler(int n);
};



