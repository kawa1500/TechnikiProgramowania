// 23-04.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Ciag.h"
#include "Dziennik.h"
#include "Uczen.h"
using namespace std;


int main()
{
    std::cout << "Hello World!\n";

    Ciag* f = new Ciag( Ciag::TYP::FIBONACI,2);
    Ciag* e = new Ciag(Ciag::TYP::EULER, 2);

    for (int i = 0; i <= 20; i++) {
        cout << "Dla indeksu " << i << " wartosc ciagu Fibonacciego wynosi " << f->setCiag(i) << "\tSUMA: ";
        cout<< f->getSuma() << endl;
    }

    for (int i = 0; i <= 20; i++) {
        cout << "Dla indeksu " << i << " wartosc ciagu Eulera wynosi " << e->setCiag(i) << "\tSUMA: ";
        cout << e->getSuma() << endl;
    }

    Dziennik* d = new Dziennik;

    for (int i = 1; i < 10; i++) {
        d->dodaj("jan", 112233 + i);
    }

    d->wyswietl();
    cout << "Liczba elementow w liscie " << d->iloscElementow() << endl;
    d->usun(4);
    cout << "Liczba elementow w liscie " << d->iloscElementow() << endl;
    d->wyswietl();

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
