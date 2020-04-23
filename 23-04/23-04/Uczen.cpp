#include "Uczen.h"

Uczen::Uczen(std::string nName, unsigned int index)
{
	name = nName;
	indeks = index;
	next = nullptr;
}

Uczen::~Uczen()
{
	delete next;
}

void Uczen::zmienImie(std::string nName)
{
	name = nName;
}

std::string Uczen::imie()
{
	return name;
}

void Uczen::zmienIndex(unsigned int index)
{
	indeks = index;
}

unsigned int Uczen::index()
{
	return indeks;
}
