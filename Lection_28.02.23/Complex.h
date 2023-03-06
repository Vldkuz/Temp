#pragma once
class Complex
{
public:
	Complex();
	Complex(const Complex& arg);
	~Complex();
	void add();
	void sub();
	void mul();
	void div();

	double Abs() const;
	std::string ToString() const;
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

