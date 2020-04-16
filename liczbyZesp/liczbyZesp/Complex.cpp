#include "Complex.h"
#include "Complex.h"

	Complex::Complex(double Re, double Im) {
		this->Re = Re;
		this->Im = Im;
	}
	Complex::Complex(const Complex& old_obj) {
		this->Re = old_obj.Re;
		this->Im = old_obj.Im;
	}

	Complex::~Complex()
	{
	}

	void Complex::display() {
		cout << this->Re;
		if (Im >= 0) cout << "+";
		cout << this->Im  << "j" << endl;
	}
	void Complex::assign(const Complex& c) {
		this->Re = c.Re;
		this->Im = c.Im;
	}
	void Complex::add(const Complex& c) {
		this->Re += c.Re;
		this->Im += c.Im;
	}
	void Complex::add(double v) {
		this->Re += v;
	}
	void Complex::subtract(const Complex& c) {
		this->Re -= c.Re;
		this->Im -= c.Im;
	}
	void Complex::multiply(const Complex& c) {
		double a = this->Re, b = this->Im;
		this->Re = (a * c.Re) - (b * c.Im);
		this->Im = (a * c.Im) + (b * c.Re);
	}
	void Complex::divide(const Complex& c) {
		double a = this->Re, b = this->Im;
		double licznRe = 0.0;
		double licznIm = 0.0;
		licznRe = (this->Re * c.Re) + (this->Im * c.Im);
		licznIm = (this->Im * c.Re) - (this->Re * c.Im);
		this->Re = licznRe / (c.Re * c.Re + c.Im * c.Im);
		this->Im = licznIm / (c.Re * c.Re + c.Im * c.Im);
	}
	double Complex::mod() {
		return sqrt((this->Re * this->Re) + (this->Im * this->Im));
	}

	double Complex::getRe() {
		return this->Re;
	}
	double Complex::getIm() {
		return this->Im;
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

	bool Complex::operator<(const Complex& c)
	{
		if (this->mod() < (c.Re*c.Re+c.Im*c.Im)) return true;
		else return false;
	}

	bool Complex::operator>(const Complex& c)
	{
		if (this->mod() > (c.Re * c.Re + c.Im * c.Im)) return true;
		else return false;
	}

	std::ostream& operator<<(std::ostream& os, const Complex& c)
	{
		if (c.Im >= 0) 
			return os << c.Re << "+" << c.Im << "j";
		else
			return os << c.Re << c.Im << "j";
	}
