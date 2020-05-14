// Watki.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
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
#include <fstream> //import biblioteki fstream
#include <stdio.h> //import biblioteki stdio.h
#include <string>
#include <future>
using namespace std;

void wyswietlCzas() {
	auto end = chrono::system_clock::now();
	time_t end_time = chrono::system_clock::to_time_t(end);
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "Czas aktualny:" << ctime(&end_time) << endl;
}

void iteruj1(int n)
{
	for (int i = 0; i < 5; i++) {
		cout << "Iteruj1:\t" << i << "\t" << n << endl;
		++n;
		this_thread::sleep_for(chrono::milliseconds(50));
	}
}
void iteruj2(int& n)
{
	for (int i = 0; i <= 5; i++) {
		cout << "Iteruj2:\t" << i << "\t" << n << endl;
		++n;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
}

thread stworzWatek() {
	thread thd([] {cout << "Przekazywanie za pomoca lambdy" << endl; });
	return thd;
}

double licznik = 0;

void zwieksz() {
	cout << "Obecna wartosc licznika: " << licznik << endl;
	for (int i=0; i < 1000; i++) {
		licznik++;
		this_thread::sleep_for(chrono::milliseconds(10));
	}
	cout << "Wartosc licznika po zwiekszeniu: " << licznik << endl;
}

atomic<bool> gotowosc = true;

void zwiekszA() {
	cout << "Obecna wartosc licznika: " << licznik << endl;
	for (int i = 0; i < 1000; i++) {
		if (gotowosc) {
			gotowosc = false;
			licznik++;
			this_thread::sleep_for(chrono::milliseconds(10));
			gotowosc = true;
		}
		
	}
	cout << "Wartosc licznika po zwiekszeniu: " << licznik << endl;
}

mutex mojMutex;

void zwiekszM() {
	cout << "Obecna wartosc licznika: " << licznik << endl;
	for (int i = 0; i < 1000; i++) {
		mojMutex.lock();
		licznik++;
		this_thread::sleep_for(chrono::milliseconds(10));
		mojMutex.unlock();
	}
	cout << "Wartosc licznika po zwiekszeniu: " << licznik << endl;
}

time_t stoper() {
	auto end = chrono::system_clock::now();
	time_t end_time = chrono::system_clock::to_time_t(end);
	return end_time;
}

time_t czas;

double Pi4 = 0.0;
double pi41 = 0;
double pi42 = 0;
double pi43 = 0;
double pi44 = 0;
double pi45 = 0;
double pi46 = 0;
double pi47 = 0;
double pi48 = 0;
double pi49 = 0;
double pi410 = 0;

void wyliczPi(int k, double& pi) {
	for (int i = 1; i <= 1000; i++) {
		
		pi += (pow(-1.0, (k*1000.0)+i + 1.0) / (2.0*(k*1000.0+i) - 1.0));
		//cout << "Pi "<<pi<<", k "<< k*1000+i <<", wyraz "<< (pow(-1, (k * 1000) + i + 1.0) / (2 * (k * 1000 + i) - 1)) << endl;

		
	}
}

bool work = true;
mutex PiM;

void odczytZPliku(string nazwa) {
	
	ifstream uchwyt; //obiekt typu fstream (uchwyt do pliku)
	while (work) {
		uchwyt.open(nazwa); //otwieramy plik: plik.txt (plik - nazwa pliku, txt - rozszerzenie)
		string linia;
		string tekst = "";
		do
		{
			getline(uchwyt, linia); //pobierz linijkę
			tekst += linia;
		} while (linia != ""); //przerwij jeżeli linia będzie pusta (dane w pliku się skończą) UWAGA: Pamiętaj, żeby w pliku zostawić ostatnią linijkę pustą
		uchwyt.close(); //zamykamy plik	
		cout << tekst << endl;
		this_thread::sleep_for(chrono::milliseconds(2000));
	}
}

void zapisDoPliku(string nazwa) {
	ifstream uchwyti;
	ofstream uchwyto;
	double i;
	double Pi;
	string linia;
	size_t pos;
	while (work) {
		PiM.lock();
		uchwyti.open(nazwa);
		getline(uchwyti, linia);
		uchwyti.close();
		pos = linia.find(" ");
		Pi = stod(linia.substr(0, pos-1));
		i = stod(linia.substr(pos + 1));
		i++;
		Pi += 4 * (pow(-1.0, i + 1.0) / (2.0 * i - 1.0));
		uchwyto.open(nazwa);
		uchwyto << Pi <<" "<<i<< endl;
		uchwyto.close();	
		this_thread::sleep_for(chrono::milliseconds(2000));
		PiM.unlock();
	}
}

int findNumber()
{
	this_thread::sleep_for(chrono::seconds(10));
	return 10;
}

void findNumber2(int& v) {
	this_thread::sleep_for(chrono::seconds(10));
	v = 10;
}

int main()
{
	//Ćwiczenie 1 - wstęp
	/*
	wyswietlCzas();
	thread t(&wyswietlCzas);
	cout << t.joinable() << endl;
	//t.detach();
	t.join();
	cout << t.joinable() << endl;
	*/

	//Ćwiczenie 2 - uruchamianie wątków
	/*
	int n = 0;
	thread t1(iteruj1, n + 1);
	thread t2(iteruj2, ref(n));
	t1.join();		//czeka na koniec wątku t1
	thread t3(iteruj2, ref(n));
	t2.join();
	cout << "N wynosi " << n << endl;
	t3.join();
	cout << "N wynosi " << n << endl;
	cout << "Koniec programu\n";
	*/

	//Ćwiczenie 3 - tworzenie dużej ilości wątków
	/*
	thread watki[10];
	thread t(&wyswietlCzas);
	watki[2] = stworzWatek();
	watki[4] = move(t);
	//watki[2].join();
	//watki[4].join();
	
	for (int i = 0; i < 10; i++) {
		try {
			watki[i].join();
		}
		catch(exception e) {
			cout << e.what() << endl;
		}
	}
	*/

	//Ćwiczenie 4 - mutex
	/*
	czas = stoper();
	cout << licznik << endl;
	thread t1(zwieksz);
	thread t2(zwieksz);
	t1.join();
	t2.join();
	cout << licznik << endl;
	cout << "Czas obliczen " << stoper() - czas << endl;
	
	czas = stoper();
	licznik = 0;
	cout << "Zerowanie mutex\n"<< licznik << endl;
	thread t3(zwiekszM);
	thread t4(zwiekszM);
	t3.join();
	t4.join();
	cout << licznik << endl;
	cout << "Czas obliczen " << stoper() - czas << endl;

	czas = stoper();
	licznik = 0;
	cout << "Zerowanie atom\n" << licznik << endl;
	cout << licznik << endl;
	thread t5(zwiekszA);
	thread t6(zwiekszA);
	t5.join();
	t6.join();
	cout << licznik << endl;
	cout << "Czas obliczen " << stoper() - czas << endl;
	*/

	//Ćwiczenie 5 - duża liczba wątków
	/*czas = stoper();
	thread t1(wyliczPi, 0, ref(pi41));
	thread t2(wyliczPi, 1, ref(pi42));
	thread t3(wyliczPi, 2, ref(pi43));
	thread t4(wyliczPi,3, ref(pi44));
	thread t5(wyliczPi,4, ref(pi45));
	thread t6(wyliczPi,5, ref(pi46));
	thread t7(wyliczPi,6, ref(pi47));
	thread t8(wyliczPi,7, ref(pi48));
	thread t9(wyliczPi,8, ref(pi49));
	thread t10(wyliczPi,9, ref(pi410));
	t1.join();
	t2.join();
	t3.join();
	t4.join();
	t5.join();
	t6.join();
	t7.join();
	t8.join();
	t9.join();
	t10.join();
	Pi4 = pi41 + pi42 + pi43 + pi44 + pi45 + pi46 + pi47 + pi48 + pi49 + pi410;
	cout << pi41 * 4.0 << endl;
	//cout << pi41 << " " << pi42 << " " << pi43 << " " << pi44 << " " << pi45 << " " << pi46 << " " << pi47 << " " << pi48 << " " << pi49 << " " << pi410 << endl;
	cout << Pi4*4 << endl;
	cout << "Czas obliczen " << stoper() - czas << endl;
	*/
	
	//Ćwiczenie 6 - pliki i wątki
	/*
	//cout << thread::hardware_concurrency() << endl;
	const unsigned tabIndex = 10;
	thread t1(odczytZPliku, "D:/Studia/TP/TechnikiProgramowania/dane.txt");
	//thread t2(zapisDoPliku, "D:/Studia/TP/TechnikiProgramowania/dane.txt");
	thread watki[tabIndex];
	for (int i = 1; i <= tabIndex; i++) {
		thread tm2(zapisDoPliku, "D:/Studia/TP/TechnikiProgramowania/dane.txt");
		watki[i - 1] = move(tm2);
	}

	while (work) {
		cin >> work;
	}
	if (t1.joinable()) t1.join();
	for (int i = 0; i < tabIndex; i++) {
		if (watki[i].joinable()) watki[i].join();
	}*/

	//Ćwiczenie 7 - asynchron
	/*int nM = 0;
	thread t0(findNumber2, ref(nM));
	cout << "inne operacje" << endl;
	t0.join();
	//zablokowane przez join
	cout << "Wartosc oczekiwana: " << nM << endl;
	
	future<int> nM2 = async(findNumber);
	cout << "inne operacje2" << endl;
	cout << "Wartosc oczekiwana: " << nM2.get() << endl;*/
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
