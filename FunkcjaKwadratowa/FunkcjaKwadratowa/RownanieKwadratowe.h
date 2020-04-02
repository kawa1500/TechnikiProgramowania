#pragma once
#include <list>

class RownanieKwadratowe
{

private:
	double a, b, c;

public:
	enum class WSPOLCZYNNIK { A, B, C };
	RownanieKwadratowe(double defaultValue = 0.0);  //do wszystkich wsp przypisujemy defaultValue
	RownanieKwadratowe(double a, double b, double c); //a=a. b=b. c=c,
	RownanieKwadratowe(double* listWsp); // przekazujemy tablice dynamiczna, ktorej elementy sa przepisywane do wspolczynnikow a=listWsp[0]
	RownanieKwadratowe(const RownanieKwadratowe& copy); //konstruktor kopii, a = copy.a
	~RownanieKwadratowe();

public:
	double get(WSPOLCZYNNIK wsp); // zwraca warosc wsp ktory podamy
	void set(WSPOLCZYNNIK wsp, const double& value); // ustawia wartosc wspl ktore podamy
	void set(double* listWsp); //ustawia wartosci analogiczne jak w konstruktorze z tablica dynamiczna
	void display(); //wyswietla wartosci a,b,c
	double delta();	//wylicza delte
	std::list<double> zeroPlaces();	//zwraca miejsca zerowe w postacie listy

};