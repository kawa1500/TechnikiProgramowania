#pragma once
#include <list>
class RownanieKwadratowe
{
	double a, b, c;

public:
	enum class WSPOLCZYNNIK{A,B,C};
	RownanieKwadratowe(double defaultValue = 0.0);
	RownanieKwadratowe(double a, double b, double c);
	RownanieKwadratowe(double *listWsp);
	RownanieKwadratowe(const RownanieKwadratowe& copy);
	~RownanieKwadratowe();

	double get(WSPOLCZYNNIK wsp);
	void set(WSPOLCZYNNIK wsp, const double& value);
	void set(double* listWsp);
	void display();
	double delta();
	std::list<double> zeroPlaces();

};

