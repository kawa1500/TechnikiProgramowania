#include "Uczen.h"
#include <string>

Uczen::Uczen(std::string nName, unsigned int index):name(nName),indeks(index)
{
	next = nullptr;
}

Uczen::~Uczen() 
{
	delete next;
}


void Uczen::zmienImie(std::string nName)
{
	this->name = nName;
}
std::string Uczen::imie()
{
	return this->name;
}
void Uczen::zmienIndeks(unsigned int index)
{
	this->indeks = index;
}
unsigned int Uczen::index()
{
	return this->indeks;
}