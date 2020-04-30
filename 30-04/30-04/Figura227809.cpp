#include "Figura227809.h"

Figura227809::Figura227809()
{
	ileBokow = 0;
	ileKatow = 0;
	boki = nullptr;
	katy = nullptr;
	next = nullptr;
}

Figura227809::~Figura227809()
{
	delete boki;
	delete katy;
	delete next;
}

double Figura227809::dajPole()
{
	return 0.0;
}

double Figura227809::dajObwod()
{
	return 0.0;
}

string Figura227809::jakaFigura()
{
	return " ";
}

bool Figura227809::operator==(const Figura227809& f)
{
	if ((this->boki[0]==f.boki[0])&&
		(this->boki[1] == f.boki[1])&&
		(this->boki[2] == f.boki[2])&&
		(this->boki[3] == f.boki[3])&&
		(this->katy[0] == f.katy[0])&&
		(this->katy[1] == f.katy[1])&&
		(this->katy[2] == f.katy[2])&&
		(this->katy[3] == f.katy[3])) return true;
	else return false;
}

std::ostream& operator<<(std::ostream& os, Figura227809& f)
{
	return os << f.jakaFigura() << " o polu " << f.dajPole() << " i obwodzie " << f.dajObwod();
}
