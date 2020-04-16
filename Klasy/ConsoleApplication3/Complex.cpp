#include "Complex.h"
#include <iostream>
#include <math.h>

//using namespace std;


Complex::Complex(double Re, double Im)
{
	this->Re = Re;
	this->Im = Im;
}

Complex::Complex(const Complex& old_obj)
{
	Re = old_obj.Re;
	Im = old_obj.Im;
}

Complex::~Complex()
{

}
void Complex::display() 
{
	std::cout << "{" << Re << ", " << Im << " (i)}" << std::endl;
}


void Complex::assign(const Complex& c)
{
	Re = c.Re;
	Im = c.Im;
}


void Complex::add(const Complex& c)
{
	Re = Re + c.Re;
	Im = Im + c.Im;
}

void Complex::add(double v)
{
	Re = Re + v;
}
void Complex::substract(const Complex& c)
{
	Re = Re - c.Re;
	Im = Im - c.Im;
}
void Complex::multiply(const Complex& c)
{
	double a = this->Re, b = this->Im;
	Re = (a * c.Re) - (b * c.Im);
	Im = (a * c.Im) + (c.Re * b);
}
void Complex::divide(const Complex& c)
{
	double a = this->Re, b = this->Im;
	Re = ((a * c.Re) + (b * c.Im)) / (c.Re*c.Re + c.Im*c.Im);
	Im = ((c.Re * b) - (a * c.Im)) / (c.Re*c.Re + c.Im*c.Im);
}
double Complex::mod()
{
	return sqrt((Re *Re) + (Im * Im));
}

double Complex::getRe()
{
	return Re;
}

double Complex::getIm()
{
	return Im;
}

Complex&  Complex::operator = (const Complex& right)
{
	this->assign(right);
	return *this;
}

Complex Complex::operator + (const Complex& c)
{
	this->add(c);
	return *this;
}
Complex Complex::operator + (const double& v)
{
	this->add(v);
	return *this;
}
Complex Complex::operator - (const Complex& c)
{
	this->substract(c);
	return *this;
}
Complex Complex::operator * (const Complex& c)
{
	this->multiply(c);
	return *this;
}
Complex Complex::operator / (const Complex& c)
{
	this->divide(c);
	return *this;
}

std::ostream& operator << (std::ostream& os, const Complex& c)
{
	os << "{" << c.Re << ", " << c.Im << " (i)}";
	return os;
}

bool  Complex::operator < (const Complex& c)
{
	Complex x(c);
	return (this->mod() > x.mod());
}

bool  Complex::operator > (const Complex& c)
{
	Complex x(c);
	return (this->mod() < x.mod());
}
