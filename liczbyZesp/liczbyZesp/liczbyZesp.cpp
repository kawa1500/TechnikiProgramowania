// liczbyZesp.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Complex.h"
#include "Prostokat.h"
#include "Figura.h"

class A {
protected:
    int b;
private:
    int a;
public:
    A() {
        b = 1;
        a = 0;
        cout << "konstruktor A"<<endl;
    }
    ~A() {
        cout << "destruktor A" << endl;
    }
    int getB() {
        return b;
    }
};

class B : public A {
public:
    B() {
        b = 2;
        cout << "konstruktor B" << endl;
    }
    ~B() {
        cout << "destruktor B" << endl;
    }
};

class C : public A {
public:
    C() {
        b = 3;
        cout << "konstruktor C" << endl;
    }
    ~C() {
        cout << "destruktor C" << endl;
    }
};

int main()
{/*
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
    */

   /* A* a0 = new A();
    B* b1 = new B();
    C* c1 = new C();

    cout << a0->getB() << endl;
    cout << b1->getB() << endl;
    cout << c1->getB() << endl;

    a0 = b1;
    cout << a0->getB() << endl;

    a0 = c1;
    cout << a0->getB() << endl;*/

   /* delete b1;
    delete c1;
    delete a0;*/

    Prostokat* p1 = new Prostokat(2, 3);
    cout << p1->getCountOfSide() << endl;
    cout << p1->getArea() << endl;
    
    Figura* f = new Figura();

    cout << f->getCountOfSide() << endl;
    cout << f->getArea() << endl;

    f = p1;

    cout << f->getCountOfSide() << endl;
    cout << f->getArea() << endl;
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
