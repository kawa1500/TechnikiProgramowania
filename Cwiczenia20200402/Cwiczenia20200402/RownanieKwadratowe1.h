#pragma once
#include <list>

class RownanieKwadratowe1
{

private:
	double a, b, c;

public:
	enum class WSPOLCZYNNIK { A, B, C };
	RownanieKwadratowe1(double defaultValue = 0.0);  //do wszystkich wsp przypisujemy defaultValue
	RownanieKwadratowe1(double a, double b, double c); //a=a. b=b. c=c,
	RownanieKwadratowe1(double* listWsp); // przekazujemy tablice dynamiczna, ktorej elementy sa przepisywane do wspolczynnikow a=listWsp[0]
	RownanieKwadratowe1(const RownanieKwadratowe1& copy); //konstruktor kopii, a = copy.a
	~RownanieKwadratowe1();

public:
	double get(WSPOLCZYNNIK wsp); // zwraca warosc wsp ktory podamy
	void set(WSPOLCZYNNIK wsp, const double& value); // ustawia wartosc wspl ktore podamy
	void set(double* listWsp); //ustawia wartosci analogiczne jak w konstruktorze z tablica dynamiczna
	void display(); //wyswietla wartosci a,b,c
	double delta();	//wylicza delte
	std::list<double> zeroPlaces();	//zwraca miejsca zerowe w postacie listy

};