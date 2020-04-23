#include "Dziennik.h"
#include <iostream>


void Dziennik::dodaj(std::string imie, unsigned int indeks)
{
	Uczen* u = new Uczen(imie, indeks);
	if (pierwsza == nullptr)
	{
		pierwsza = u;
	}
	else
	{
		Uczen* temp = pierwsza;

		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = u;
	}
}
void Dziennik::usun(int nr)
{
	if (nr == 1)
	{
		Uczen* temp = pierwsza;
		pierwsza = temp->next;
		//delete temp;
	}
	else if (nr > 1)
	{
		int counter = 1;

		Uczen* temp = pierwsza;
		while (temp != nullptr)
		{
			if ((counter + 1) == nr)break;
			temp = temp->next;
			counter++;
		}

		if (temp->next->next == nullptr)
		{
			temp->next = nullptr;
		}
		else
		{
			//Uczen* toDelete = temp->next;
			temp->next = temp->next->next;
			//delete toDelete
		}
	}
}
void Dziennik::wyswietl()
{
	Uczen* u = pierwsza;
	while (u!= nullptr)
	{
		std::cout << "[" << u->imie() << "," << u->index() << "]";
		u = u->next;
	}
	std::cout << "\n";
}

Dziennik::Dziennik()
{
	pierwsza = nullptr;
}
Dziennik::~Dziennik()
{
	delete pierwsza;
}

int Dziennik::iloscElementow()
{
	int counter = 0;
	Uczen* temp = pierwsza;
	if (temp == nullptr)
	{
		return 0;
	}
	else
	{
		while (temp != nullptr)
		{
			counter++;
			if (temp->next == nullptr) break;
			temp = temp->next;
		}

		return counter;
	}
}
