// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "RownanieKwadratowe1.h"

using namespace std;


int main()
{



	RownanieKwadratowe1 r1(1.0);
	r1.display();
	cout << "Delta :" << r1.delta() << endl;
	r1.set(RownanieKwadratowe1::WSPOLCZYNNIK::B, 2.0);
	r1.display();
	cout << "Delta :" << r1.delta() << endl;
	for (double v : r1.zeroPlaces())
		cout << "Miejsce zerowe: " << v << "\n";



	double* tab = new double[3];
	tab[0] = 1.0;
	tab[1] = 2.0;
	tab[2] = 1.0;



	RownanieKwadratowe1 r2(tab);
	r2.display();
	cout << "Delta :" << r2.delta() << endl;
	for (double v : r2.zeroPlaces())
		cout << "Miejsce zerowe: " << v << "\n";



	r2.set(RownanieKwadratowe1::WSPOLCZYNNIK::A, 0.0);
	RownanieKwadratowe1* r3 = new RownanieKwadratowe1(r2);
	r3->display();
	cout << "Delta :" << r3->delta() << endl;
	for (double v : r3->zeroPlaces())
		cout << "Miejsce zerowe: " << v << "\n";



	delete r3;

}