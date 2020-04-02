#include "Przykladowa.h"
#include <iostream>
Przykladowa::Przykladowa(int a):zmienna(a)
{
	//zmienna = a;
	//this->zmienna = a;
	zmienna2 = new int[a];
}
Przykladowa::~Przykladowa()
{
	delete[] zmienna2;
}

void Przykladowa::display()
{
	std::cout << "zmienna: " << zmienna << std::endl;
}
[18:13] Bart³omiej Kawa
    
std::list<double> RownanieKwadratowe::zeroPlaces()
{
	return std::list<double>();
}
