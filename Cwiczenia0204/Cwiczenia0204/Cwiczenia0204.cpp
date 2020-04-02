// Cwiczenia0204.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "RownanieKwadratowe.h"

using namespace std;

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








// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
