#include "przykladowa.h";
#include <iostream>
przykladowa::przykladowa(int a) :zmienna(a)
{
	zmienna2 = new int[a];
}
przykladowa::~przykladowa()
{
	delete[]zmienna2;
}
void przykladowa::display() {
	std::cout << "zmienna: " << zmienna << std::endl;
}
