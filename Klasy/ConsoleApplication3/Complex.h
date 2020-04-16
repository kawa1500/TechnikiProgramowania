#pragma once
#include "Complex.h"
#include <iostream>
class Complex
{

private:
	double Re, Im;

public:
	Complex(double Re, double Im = 0.0); //konstruktor
	Complex(const Complex& old_obj); //konstruktor kopiujacy
	~Complex(); //destruktor

	void display(); //wyswietla liczbe complex w postaci {Re, IM(i)}
	void assign(const Complex& c); //przypisywanie do liczby complex wartosci z innej liczby
	void add(const Complex& c); //dodawanie liczby do liczby complex
	void add(double v); //dodawanie liczby do iczby complex
	void substract(const Complex& c); //odejmowanie
	void multiply(const Complex& c); //mnozenie
	void divide(const Complex& c); //dzielenie
	double mod(); //modul liczby 

	double getRe(); //zwraca Re
	
	double getIm();//zwraca Im
	
	Complex& operator = (const Complex& right);
	Complex operator + (const Complex& c);
	Complex operator + (const double& v);
	Complex operator - (const Complex& c);
	Complex operator * (const Complex& c);
	Complex operator / (const Complex& c);

	friend std::ostream& operator << (std::ostream& os, const Complex& c);

	bool operator <(const Complex& c);
	bool operator >(const Complex& c);
};

