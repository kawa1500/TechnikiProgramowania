#pragma once
#include <list>
class RownanieKwadratowe
{
private:
	double a, b, c;
public:
	enum class WSPOLCZYNNIK {A,B,C};
	RownanieKwadratowe(double defaultValue = 0.0); // to wszystkich wspolczynnikow przypisujemy defaultVaule
	RownanieKwadratowe(double a, double b, double c); //a=a, b=b, c=c
	RownanieKwadratowe(double* listWsp); //przekazujemy tablice dynamiczna, ktorej elementy sa przypisywane do wspolczynnikow, a=listWsp[0]
	RownanieKwadratowe(const RownanieKwadratowe& copy); //Konstruktor kopii, a=copy.a ...
	~RownanieKwadratowe();
public:
	double get(WSPOLCZYNNIK wsp);  //zwraca warto�� wspolczynnika ktory podamy
	void set(WSPOLCZYNNIK, const double& value); // ustawia warto�� wsp�czynnika kt�ry podamy
	void set(double* listWsp); //ustawia warto�ci analogicznie jak w konstruktorze z tablica dynamiczna
	void display(); // wyswietla wartosci a,b,c
	double delta(); //wylicza delte
	std::list<double> zeroPlaces(); // zwraca miejsca zerowe w postaci listy
	

};

