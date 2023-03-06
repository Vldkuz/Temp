#include "Complex.h"
#include <string>

Complex::Complex() {
	this->Re = 0;
	this->Im = 0;
}

Complex::~Complex() {


}

void Complex::add()
{

}

void Complex::sub()
{

}

void Complex::mul()
{

}

void Complex::div(const Complex& arg)
{
	double r = arg.Re * arg.Re + arg.Im * arg.Im;
	Complex q(arg.Re, -arg.Im);

	this->mul(q);

	Re = Re / r;
	Im = Im / r;
}

double Complex::Abs() const
{
	return sqrt(Re * Re + Im * Im);
}

Complex::Complex(const Complex& arg) {

}

Complex Complex::operator+(const Complex& arg) {
	return Add(arg);
}

std::string Complex::ToString() const
{
	return std::to_string(Re) + "i" + std::to_string(Im);
}
