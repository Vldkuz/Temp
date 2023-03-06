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

//Отличия классов от структур: 1) Модификаторы доступа по умолчанию private/protected
//Структуры про хранение, Классы про функциональность
//Нет возможности изменять объект после его создания: 
//Дом задание : Дописать комплексные
//Разобраться вызывается ли конструктор копирования
//Перегрузить оператор сравнения 
//Перегрузить оператор присваивания
//Перегрузить оператор ввода
//Перегрузить оператор индексации
//friend

