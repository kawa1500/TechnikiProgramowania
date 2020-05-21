// ZaliczenieWatki227809.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#pragma warning(disable:4996)
#include <iostream>
#include <thread>
#include <chrono>
#include <ctime>
#include <exception>
#include <mutex>
#include <atomic>
#include <math.h>
#include <stdio.h>
#include <string>
using namespace std;

bool work = true;
int tx = 0;
int rx = 0;
int x = 0;
mutex nM;

int tabIP1[260];
int tabIP2[260];
int tabIP3[260];
int tabIP4[260];

void monitor() {
	while (work) {		
		nM.lock();
		for (int i = 0; i < x; i++) {
			cout << "M:[" << tabIP1[i] << "." << tabIP2[i] << "." << tabIP3[i] << "." << tabIP4[i] << "]" << endl;
		}
		cout << "RX:" << rx << " TX:" << tx << endl;
		nM.unlock();
		this_thread::sleep_for(chrono::milliseconds(100));
	}
}

void nadawanie() {
	while (work) {
		nM.lock();
		tabIP1[x]= (rand() % 255);
		tabIP2[x] = (rand() % 255);
		tabIP3[x] = (rand() % 255);
		tabIP4[x] = (rand() % 255);		
		cout << "N:[" << tabIP1[x] << "." << tabIP2[x] << "." << tabIP3[x] << "." << tabIP4[x] << "]" << endl;
		tx++;
		x++;
		nM.unlock();
		this_thread::sleep_for(chrono::milliseconds(200));
	}
}

void odbieranie() {
	while (work) {
		nM.lock();
		for (int i = 0; i < x; i++) {
			cout << "O:[" << tabIP1[i] << "." << tabIP2[i] << "." << tabIP3[i] << "." << tabIP4[i] << "]" << endl;
			rx++;			
		}
		x = 0;
		nM.unlock();
		this_thread::sleep_for(chrono::milliseconds(500));
	}
}

int main()
{
	for (int i = 0; i < 260; i++) {
		tabIP1[i] = 0;
		tabIP2[i] = 0;
		tabIP3[i] = 0;
		tabIP4[i] = 0;
	}

	thread tm(monitor);
    thread tn(nadawanie);
    thread to(odbieranie);

    while (work) {
        if (rx > 100) work = false;
    }

    if (tm.joinable()) tm.join();
    if (tn.joinable()) tn.join();
    if (to.joinable()) to.join();
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
