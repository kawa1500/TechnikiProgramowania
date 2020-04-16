// Zadanie_1_16_04_20.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Complex.h"
#include "Prostokat.h"

class A 
{
protected:
	int b;
private:
	int a;
public:
	A() {
		b = 1;
		a = 0;
		cout << "Konstruktor A" << endl;
	}

	int getB() {
		return b;
	}

	~A() {
		cout << "Destruktor A" << endl;
	}
};

class B : public A 
{
public:
	B()
	{
		b = 2;
		cout << "Konstruktor B" << endl;
	}

	~B()
	{
		cout << "Destuktor B" << endl;
	}
};

class C : public A
{
public:
	C()
	{
		b = 3;
		cout << "Konstruktor C" << endl;
	}

	~C()
	{
		cout << "Destuktor C" << endl;
	}
};

int main()
{
	Prostokat* p = new Prostokat(2, 5);
	cout << p->getCuntOfSides() << endl;
	cout << p->getArea() << endl;

	Figura* f = new Figura();
	cout << f->getCuntOfSides() << endl;
	cout << f->getArea() << endl;

	f = p;
	cout << f->getCuntOfSides() << endl;
	cout << f->getArea() << endl;
	/*
	A* a0 = new A();
	B* b1 = new B();
	C* c1 = new C();

	cout << a0->getB() << endl;
	cout << b1->getB() << endl;
	cout << c1->getB() << endl;

	a0 = b1;
	cout << a0->getB() << endl;

	a0 = c1;
	cout << a0->getB() << endl;


	delete b1;
	delete c1;
	delete a0;
	*/
	
	
	/*
	Complex *c1 = new Complex(1.0, 2.0);
	Complex* c2 = new Complex(5.0, 0.0);
	Complex* c3 = new Complex(666.0, 666.0);
	Complex* c4 = new Complex(*c1);

	c1->display();

	c1->add(*c2);
	c1->display();

	c2->display();
	c3->display();
	c2->assign(*c3);
	c2->display();
	
	c1->divide(*new Complex(0.0, 0.0));

	c1->display();
	cout << c1->mod();
	
	Complex a(2.0);
	a.display();
	Complex b(3.5, 1.5);
	b.display();
	a.assign(b);
	a.display();
	a.add(b);
	a.display();
	a.add(-6.0);
	a.display();
	Complex c(b);
	c.display();
	c.subtract(a);
	c.display();
	c.multiply(a);
	c.display();
	c.divide(a);
	c.display();



	cout << "Re: " << a.getRe() << "\tIm: " << a.getIm() << "\tMod: " << a.mod() << endl;
	cout << "Re: " << b.getRe() << "\tIm: " << b.getIm() << "\tMod: " << b.mod() << endl;
	cout << "Re: " << c.getRe() << "\tIm: " << c.getIm() << "\tMod: " << c.mod() << endl;


	Complex d(2.0);
	cout << d << endl;
	Complex e(3.5, 1.5);
	cout << e << endl;
	d = e;
	cout << d << endl;
	d = d + e;
	cout << d << endl;
	d = d + (-6.0);
	cout << d << endl;
	Complex f(e);
	cout << f << endl;
	f = f - d;
	cout << f << endl;
	f = f * d;
	cout << f << endl;
	f = f / d;
	cout << f << endl;

	if (f < d) cout << "TRUE"<<endl;
	else cout << "FALSE" << endl;
	*/
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
