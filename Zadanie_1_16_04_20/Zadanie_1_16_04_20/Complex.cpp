#include "Complex.h"

Complex::Complex(double Re, double Im)
{
	this->Re = Re;
	this->Im = Im;
}

Complex::Complex(const Complex& old_obj)
{
	this->Re = old_obj.Re;
	this->Im = old_obj.Im;
}

Complex::~Complex()
{
}

void Complex::display()
{
	cout << "{" << Re << ", " << Im << " (i)}" << endl;
}

void Complex::assign(const Complex& c)
{
	this->Re = c.Re;
	this->Im = c.Im;
}

void Complex::add(const Complex& c)
{
	this->Re = this->Re + c.Re;
	this->Im = this->Im + c.Im;
}

void Complex::add(double v)
{
	this->Re = this->Re + v;
}

void Complex::subtract(const Complex& c)
{
	this->Re = this->Re - c.Re;
	this->Im = this->Im - c.Im;
}

void Complex::multiply(const Complex& c)
{
	double a = this->Re, b = this->Im;
	this->Re = a * c.Re - b * c.Im;
	this->Im = (b * c.Re) + (a * c.Im);
}

void Complex::divide(const Complex& c)
{
	if (c.Re == 0 || c.Im == 0) 
	{
		cout << "ERROR: DIVISION BY ZERO!!!!!1111" << endl;
		return;
	}
	else 
	{
		double a = this->Re, b = this->Im;
		this->Re = (a * c.Re + b * c.Im) / (pow(c.Re, 2) + pow(c.Im, 2));
		this->Im = (b * c.Re - a * c.Im) / (pow(c.Re, 2) + pow(c.Im, 2));
	}
}

double Complex::mod()
{
	return sqrt(Re * Re + Im * Im);
}

double Complex::getRe()
{
	return Re;
}

double Complex::getIm()
{
	return Im;
}

Complex& Complex::operator=(const Complex& right)
{
	this->assign(right);
	return *this;
}

Complex Complex::operator+(const Complex& c)
{
	this->add(c);
	return *this;
}

Complex Complex::operator+(const double& c)
{
	this->add(c);
	return *this;
}

Complex Complex::operator-(const Complex& c)
{
	this->subtract(c);
	return *this;
}

Complex Complex::operator*(const Complex& c)
{
	this->multiply(c);
	return *this;
}

Complex Complex::operator/(const Complex& c)
{
	this->divide(c);
	return *this;
}

double Complex::operator%(const Complex& c)
{
	return this->mod();
}

bool Complex::operator<(const Complex& c)
{
	
	return this->mod() < (sqrt(c.Re*c.Re + c.Im * c.Im));
}

bool Complex::operator>(const Complex& c)
{
	return this->mod() > (sqrt(c.Re * c.Re + c.Im * c.Im));
}

ostream& operator<<(ostream& os, const Complex& c)
{
	os << "{" << c.Re << ", " << c.Im << " (i)}";
	return os;
}
