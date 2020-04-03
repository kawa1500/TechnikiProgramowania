#include "przyklad.h"
#include <iostream>

przyklad::przyklad(int a):zmienna(a)
{
	//zmienna = a; //lub to
	//this->zmienna = a; //lub to
	zmienna2 = new int[a];
}

przyklad::~przyklad()
{
	delete[] zmienna2;
	//delete zmienna2; //gdyby to by³ wskaznik
}

void przyklad::display()
{
	std::cout << "zmienna: " << zmienna << std::endl;
}
