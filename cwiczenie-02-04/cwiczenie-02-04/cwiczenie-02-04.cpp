
/*
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
void przykladowa::display(){
	std::cout << "zmienna: " << zmienna << std::endl;
}

*/

#include "przykladowa.h"
#include"RownanieKwadratowe.h"
#include <iostream>
#include <string>
int main()
{

    



        RownanieKwadratowe r1(1.0);
        r1.display();
        cout << "Delta :" << r1.delta() << endl;
        r1.set(RownanieKwadratowe::WSPOLCZYNNIK::B, 2.0);
        r1.display();
        cout << "Delta :" << r1.delta() << endl;
        for (double v : r1.zeroPlaces())
            cout << "Miejsce zerowe: " << v << "\n";



        double* tab = new double[3];
        tab[0] = 1.0;
        tab[1] = 2.0;
        tab[2] = 1.0;



        RownanieKwadratowe r2(tab);
        r2.display();
        cout << "Delta :" << r2.delta() << endl;
        for (double v : r2.zeroPlaces())
            cout << "Miejsce zerowe: " << v << "\n";



        r2.set(RownanieKwadratowe::WSPOLCZYNNIK::A, 0.0);
        RownanieKwadratowe* r3 = new RownanieKwadratowe(r2);
        r3->display();
        cout << "Delta :" << r3->delta() << endl;
        for (double v : r3->zeroPlaces())
            cout << "Miejsce zerowe: " << v << "\n";



        delete r3;

    
}
    /*
	przykladowa p0(3);
	p0.display();
	przykladowa p1 = new przykladowa(5);
    p1->display();



    przykladowa p2(7);
    przykladowa p3(9);
    p1 = &p2;
    p1->display();
    p1 = &p3;
    p1->display();
    p1 = &p0;
    p1->display();



   */

