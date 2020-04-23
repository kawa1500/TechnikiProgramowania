#include "Dziennik.h"
using namespace std;

void Dziennik::dodaj(std::string imie, unsigned int indeks)
{
	Uczen* u = new Uczen(imie, indeks);
	if (pierwsza == nullptr) {
		pierwsza = u;
	}
	else
	{
		pierwszaBuff = pierwsza;
		while (pierwszaBuff->next) {
			pierwszaBuff = pierwszaBuff->next;
		}
		pierwszaBuff->next = u;
	}
}

void Dziennik::usun(int nr)
{
	if (nr == 1) {
		Uczen* temp = pierwsza;
		pierwsza = temp->next;
	}
	else if (nr > 1) {
		int counter = 1;
		Uczen* temp = pierwsza;
		while(temp){
			if ((counter + 1) == nr) break;
			temp = temp->next;
			counter++;
		}
		if (!(temp->next->next)) {
			temp->next = nullptr;
		}
		else {
			temp->next = temp->next->next;
		}
	}
}

void Dziennik::wyswietl()
{	
	pierwszaBuff = pierwsza;
	do  {
		std::cout << "Imie " << pierwsza->imie() << ", numer indeksu " << pierwsza->index() << std::endl;
		if (pierwsza->next) pierwsza = pierwsza->next;
	} while (pierwsza->next);
	pierwsza = pierwszaBuff;	
}

int Dziennik::iloscElementow()
{
	int counter = 1;
	pierwszaBuff = pierwsza;
	while (pierwszaBuff->next) {
		pierwszaBuff = pierwszaBuff->next;
		counter++;
	}	

	return counter;
}

Dziennik::Dziennik()
{
	pierwsza = nullptr;
}

Dziennik::~Dziennik()
{
	delete pierwsza;
	delete pierwszaBuff;
}
