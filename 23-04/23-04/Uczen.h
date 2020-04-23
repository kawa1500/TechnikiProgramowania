#pragma once
#include <string>
#include <iostream>

class Uczen
{
private:
	std::string name;
	unsigned int indeks;

public:
	Uczen(std::string nName, unsigned int index);
	~Uczen();

	Uczen* next;
	void zmienImie(std::string nName);
	std::string imie();
	void zmienIndex(unsigned int index);
	unsigned int index();

};

