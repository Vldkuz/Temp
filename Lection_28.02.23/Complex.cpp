#include "Complex.h"
#include <string>

Complex::Complex() : Re(0), Im(0) {};

Complex::Complex(double Re, double Im) {
	this->Re = Re;
	this->Im = Im;
}

Complex::~Complex() {};

void Complex::add(const Complex &d2)
{
	this->Re += d2.Re;
	this->Im += d2.Im;
}

void Complex::sub(const Complex &d2)
{
	this->Re -= d2.Re;
	this->Im -= d2.Im;
}

void Complex::mul(const Complex &d2)
{
	this->Re = this->Re * d2.Re - this->Im * d2.Im;
	this->Im = this->Re * d2.Im + this->Im * d2.Re;
}

void Complex::div(const Complex& d2)
{
	double r = d2.Re * d2.Re + d2.Im * d2.Im;
	this->Re = (this->Re * d2.Re + this->Im * d2.Im);
	this->Im = (this->Im * d2.Re - this->Re * d2.Im);
	this->Re /= r;
	this->Im /= r;
}

double Complex::Abs() const
{
	return sqrt(Re * Re + Im * Im);
}

Complex::Complex(const Complex& arg) {
	this->Re = arg.Re;
	this->Im = arg.Im;
}


Complex Complex::operator+(const Complex& d2)
{
	Complex d1(this->Re, this->Im);
	d1.add(d2);
	return d1;
}

Complex Complex::operator-(const Complex& d2)
{
	Complex d1(this->Re, this->Im);
	d1.sub(d2);
	return d1;
}

Complex Complex::operator*(const Complex& d2)
{
	Complex d1(this->Re, this->Im);
	d1.mul (d2);
	return d1;
}

Complex Complex::operator/(const Complex& d2)
{
	Complex d1(this->Re, this->Im);
	d1.div(d2);
	return d1;
}

void Complex::operator=(const Complex& d2)
{
	this->Re = d2.Re;
	this->Im = d2.Im;
}

double Complex::operator[](const size_t i)
{
	if (i == 0)
		return this->Re;
	else if (i == 1)
		return this->Im;
	else
		return 0;
}


std::string Complex::To_String() const
{
	return std::to_string(Re) + "i" + std::to_string(Im);
}

bool operator==(const Complex& d1, const Complex& d2)
{
	return (d1.Re == d2.Re) && (d1.Im == d2.Im);
}

std::istream& operator>>(std::istream& in, Complex& d1)
{
	in >> d1.Re;
	in >> d1.Im;
	return in;
}

std::ostream& operator<<(std::ostream& out, Complex& d1)
{
	out << d1.Re << " " << d1.Im << std::endl;
	return out;
}
