#pragma once
#include <iostream>

class Complex
{
public:
	Complex();
	Complex(const Complex& arg);
	Complex(double Re, double Im);
	~Complex();
	void add(const Complex &d2);
	void sub(const Complex &d2);
	void mul(const Complex &d2);
	void div(const Complex &d2);

	Complex operator+(const Complex& d2);
	Complex operator-(const Complex& d2);
	Complex operator*(const Complex& d2);
	Complex operator/(const Complex& d2);
	friend bool operator==(const Complex& d1,const Complex& d2);
	void operator=(const Complex &d2);
	double operator[] (const size_t i);

	friend std::istream& operator>>(std::istream& in, Complex& d1);
	friend std::ostream& operator<<(std::ostream& out, Complex& d1);

	std::string To_String() const;
	double Abs() const;
private:
	double Re;
	double Im;
};





//������� ������� �� ��������: 1) ������������ ������� �� ��������� private/protected
//��������� ��� ��������, ������ ��� ����������������
//��� ����������� �������� ������ ����� ��� ��������: 
//��� ������� : �������� �����������
//����������� ���������� �� ����������� �����������
//����������� �������� ��������� 
//����������� �������� ������������
//����������� �������� �����
//����������� �������� ����������
//friend

