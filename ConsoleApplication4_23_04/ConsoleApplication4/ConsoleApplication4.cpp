
#include <iostream>
#include "Ciag.h"
#include "Dziennik.h"



int main()
{
	std::cout << "czesc odpowiedzialna za ciagi" << std::endl;
	//czesc odpowiedzialna za ciagi
	Ciag* Fibo = new Ciag(Ciag::TYP::FIBONACI,4);
	


	for (int i = 0; i < 20; i++) 
	{
		Fibo->setCiag(i);
		std::cout << "Index: " << Fibo->getIndex() << "  Wynik ciagu: " << Fibo->getWynik() << " Suma: " << Fibo->getSuma() << std::endl;
	}

	Ciag* Eulo = new Ciag(Ciag::TYP::EULER, 6);
	for (int i = 0; i < 20; i++)
	{
		Eulo->setCiag(i);
		std::cout << "Index: " << Eulo->getIndex() << "  Wynik ciagu: " << Eulo->getWynik() << " Suma: " << Eulo->getSuma() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout <<"czesc odpowiedzialna za dzienniki"<< std::endl;
	//czesc odpowiedzialna za dzienniki
	Dziennik* d = new Dziennik();
	for (int i=1; i<10; i++)
	{
		d->dodaj("Jan Kowalski", 112233 + i);
	}

	d->wyswietl();
	d->usun(1);
	d->wyswietl();

	std::cout << "Ilosc elementow: " << d->iloscElementow() << std::endl;

}

