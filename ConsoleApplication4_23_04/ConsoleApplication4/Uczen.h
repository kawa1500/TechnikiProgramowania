#pragma once
#include <string>
class Uczen
{
private:
	std::string name;
	unsigned int indeks;
public:
	Uczen(std::string nName, unsigned int index);
	~Uczen();

public:
	Uczen* next;
	void zmienImie(std::string nName);
	std::string imie();
	void zmienIndeks(unsigned int index);
	unsigned int index();

};

