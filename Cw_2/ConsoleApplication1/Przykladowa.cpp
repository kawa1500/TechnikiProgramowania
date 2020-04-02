#include "Przykladowa.h"
#include <iostream>

using namespace std;

Przykladowa::Przykladowa(int a)
{
	//zmienna = a;
	this->zmienna = a;
	zmienna2 = new int[a];
}

Przykladowa::~Przykladowa()
{
	delete[] zmienna2;
}

void Przykladowa::display()
{
	cout << "zmienna: " << zmienna << endl;
}


