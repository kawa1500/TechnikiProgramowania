#pragma once
#include "Uczen.h"
//#include <string> nie musimy dodawac bo dodane przez ucznia

class Dziennik
{
public:
	Uczen* pierwsza;
	void dodaj(std::string imie, unsigned int indeks);
	void usun(int nr);
	void wyswietl();
	int iloscElementow();

	Dziennik();
	~Dziennik();

};

