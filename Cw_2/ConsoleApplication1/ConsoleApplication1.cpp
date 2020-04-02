// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Przykladowa.h"

using namespace std;

int main()
{	
	Przykladowa p0(3);


	p0.display();
    
	Przykladowa* p1 = new Przykladowa(5);
	p1->display();


	Przykladowa p2(7);
	Przykladowa p3(9);

	p1 = &p2;
	p1->display();

	p1 = &p3;
	p1->display();

	p1 = &p0;
	p1->display();

	//delete p1;
}