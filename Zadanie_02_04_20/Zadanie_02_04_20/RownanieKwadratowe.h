#pragma once
#include<list>
class RownanieKwadratowe
{
private:
	double a=0.0, b=0.0, c=0.0;
public:
	enum class WSPOLCZYNNIK{A, B, C};
	RownanieKwadratowe(double defaultValue = 0.0);
	RownanieKwadratowe(double a, double b, double c);
	RownanieKwadratowe(double* listWsp);
	RownanieKwadratowe(const RownanieKwadratowe& copy);
	~RownanieKwadratowe();
public:
	double get(WSPOLCZYNNIK wsp);
	void set(WSPOLCZYNNIK, const double& value);
	void set(double* listWsp);
	void display();
	double delta();
	std::list<double> zeroPlaces();
};

