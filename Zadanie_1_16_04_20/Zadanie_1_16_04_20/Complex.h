#pragma once
#include <iostream>
#include <math.h>

using namespace std;
class Complex
{
private:
	double Re, Im;
public:
	Complex(double Re, double Im = 0.0);
	Complex(const Complex& old_obj);
	~Complex();

	void display();
	void assign(const Complex& c);
	void add(const Complex& c);
	void add(double v);
	void subtract(const Complex& c);
	void multiply(const Complex& c);
	void divide(const Complex& c);
	double mod();

	double getRe();
	double getIm();

	Complex& operator = (const Complex& right);
	Complex operator + (const Complex& c);
	Complex operator + (const double& c);
	Complex operator - (const Complex& c);
	Complex operator * (const Complex& c);
	Complex operator / (const Complex& c);
	double operator % (const Complex& c);
	bool operator < (const Complex& c);
	bool operator > (const Complex& c);

	friend ostream& operator << (ostream& os, const Complex& c);
};

