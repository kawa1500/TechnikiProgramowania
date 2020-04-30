#include <iostream>
#include "Figura227809.h"
#include "Czworokat227809.h"
#include "Kwadrat227809.h"
#include "Prostokat227809.h"
#include "Rownoleglobok227809.h"
//#include "Kontener227809.h"

using namespace std;

static void display(Figura227809* f)
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
	Figura227809* f = new Figura227809();
	Kwadrat227809* k1 = new Kwadrat227809(3);
	Kwadrat227809* k2 = new Kwadrat227809(5);
	display(f);
	f = k2;
	display(f);
	f = k1;
	display(f);
	cout << (*k1 == *k2) << endl;
	k1->ustawBok(5);
	display(f);
	cout << (*k1 == *k2) << endl;
	Prostokat227809* p = new Prostokat227809(3, 5);
	f = p;
	display(p);
	Rownoleglobok227809* r = new Rownoleglobok227809(3, 5, 30.0, 150.0);
	f = r;
	display(r);
	Czworokat227809* c = new Czworokat227809(10, 8, 6, 10, 0, 120, 0, 150);
	f = c;
	display(f);
	cout << (*k1 == *p) << endl;
	cout << (*p == *r) << endl;
	cout << (*c == *k2) << endl;
	r->ustawBok(1,90);
	r->ustawBok(2,90);
	cout << (*p == *r) << endl;
	/*Kontener227809* q = new Kontener227809();
	q->dodaj(k1);
	q->dodaj(k2);
	q->wswietl();
	q->dodaj(p);
	q->dodaj(c);
	q->wswietl();
	cout << "Ilosc elementow:" << q->iloscFigur() << endl;*/
}