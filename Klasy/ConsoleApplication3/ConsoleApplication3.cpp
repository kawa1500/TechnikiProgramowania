// ConsoleApplication3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Complex.h"
#include "Figura.h"
#include "Prostokat.h"

using namespace std;

class A {
protected:
	int b;

private:
	int a;

public:
	A()
	{
		b = 1;
		a = 0;
		cout << "Konstruktor A" << endl;
	}
	int getB()
	{
		return b;
	}

	~A()
	{
		cout << "Destruktor A" << endl;
	}
};

class B :public A
{
public:
	B()
	{
		b = 2;
		cout << "Konstruktor B" << endl;
	}

	~B()
	{
		cout << "Destruktor B" << endl;
	}
};

class C :public A
{
public:
	C()
	{
		b = 3;
		cout << "Konstruktor C" << endl;
	}

	~C()
	{
		cout << "Destruktor C" << endl;
	}
};

int main()
{
	Prostokat* p = new Prostokat(2, 1);
	cout << p->getCountOfSide() << endl;
	cout << p->getArea() << endl;

	Figura *f = new Figura();
	cout << f->getCountOfSide() << endl;
	cout << f->getArea() << endl;
	
	f = p;

	cout << f->getCountOfSide() << endl;
	cout << f->getArea() << endl;


	/*
	A*a1 = new A();

	B* b1 = new B();
	C*c1 = new C();
	cout << a1->getB() << endl;
	cout << b1->getB() << endl;
	cout << c1->getB() << endl;

	a1 = b1;

	cout << a1->getB() << endl;

	a1 = c1;

	cout << a1->getB() << endl;
	
	//delete b1;
	//delete c1;
	//delete a1;


	
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
	c.substract(a);
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
	*/
}

