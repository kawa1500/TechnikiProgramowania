#include <iostream>
#include "Figura227807.h"
#include "Czworokat227807.h"
#include "Kwadrat227807.h"
#include "Prostokat227807.h"
#include "Rownoleglobok227807.h"
#include "Kontener227807.h"
using namespace std;

static void display(Figura227807* f)
{
	cout << "==============================================" << endl;
	cout << f->jakaFigura() << endl;
	cout << *f << endl;
	cout << "Pole:" << f->dajPole() << endl;
	cout << "Obwod:" << f->dajObwod() << endl;
	cout << "==============================================" << endl;
}

int main()
{
	Figura227807* f = new Figura227807();
	Kwadrat227807* k1 = new Kwadrat227807(3);
	Kwadrat227807* k2 = new Kwadrat227807(5);
	display(f);
	f = k2;
	display(f);
	f = k1;
	display(f);
	cout << (*k1 == *k2) << endl;
	k1->setA(5);
	display(f);
	cout << (*k1 == *k2) << endl;
	Prostokat227807* p = new Prostokat227807(3, 5);
	f = p;
	display(p);
	Rownoleglobok227807* r = new Rownoleglobok227807(3, 5, 30.0, 150.0);
	f = r;
	display(r);
	Czworokat227807* c = new Czworokat227807(10, 8, 6, 10, 0, 120, 0, 150);
	f = c;
	display(f);
	cout << (*k1 == *p) << endl;
	cout << (*p == *r) << endl;
	cout << (*c == *k2) << endl;
	r->setAlfa(90);
	r->setBeta(90);
	cout << (*p == *r) << endl;
	Kontener227807* q = new Kontener227807();
	q->dodaj(k1);
	q->dodaj(k2);
	q->wswietl();
	q->dodaj(p);
	q->dodaj(c);
	q->wswietl();
	cout << "Ilosc elementow:" << q->iloscFigur() << endl;

}
