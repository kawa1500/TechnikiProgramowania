#include "Przykladowa.h"
#include <iostream>

Przykladowa::Przykladowa(int x)
{
	a = x;
	zmienna2 = new int[a];
}

void Przykladowa::display()
{
	std::cout << "zmienna: " << a << std::endl;
}

Przykladowa::~Przykladowa()
{
	delete[] zmienna2;
}
