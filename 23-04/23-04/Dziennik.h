#pragma once
#include "Uczen.h"

class Dziennik
{
public:
	Uczen* pierwsza;
	Uczen* pierwszaBuff = pierwsza;
	void dodaj(std::string imie, unsigned int indeks);
	void usun(int nr);
	void wyswietl();
	int iloscElementow();

	Dziennik();
	~Dziennik();
};

