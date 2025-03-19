#include <iostream>

using namespace std;

class Vehicle
{
public:
	void start()
	{
		cout << "vehicle started" << endl;
	}
};

class Car : public Vehicle
{
public:
	void start()
	{
		cout << "Car started" << endl;
	}
};

class Base
{
public:
	int value = 10;
};

class Derived : public Base
{
public:
	int value = 52;
};

class A
{
public:
	int v = 1;
};

class B : virtual public A
{
};

class C : virtual public B
{
};

class Base1
{
public:
	Base1()
	{
		cout << "Конструктор Base1" << endl;
	}
	~Base1()
	{
		cout << "Деструктор Base1" << endl;
	}
};

class Base2
{
public:
	Base2()
	{
		cout << "Конструктор Base2" << endl;
	}
	~Base2()
	{
		cout << "Деструктор Base2" << endl;
	}
};

class Derive : public Base1, public Base2
{
public:
	Derive()
	{
		cout << "Конструктор Derived" << endl;
	}
	~Derive()
	{
		cout << "Деструктор Derived" << endl;
	}
};

class Bace
{
public:
	void print()
	{
		cout << "Base print" << endl;
	}
};

class Deriv : public Bace
{
public:
	void print()
	{
		cout << "Derived print" << endl;
		Bace::print(); // Вызов метода базового класса
	}
};

int main()
{
	// 1 Создайте базовый класс Vehicle с методом start(). Создайте производный класс Car, который скроет метод start() базового класса.
	// Car car;
	// car.start();
	// car.Vehicle::start();
	// // 2 Создайте базовый класс Base с атрибутом value. Создайте производный класс Derived, который скроет этот атрибут.
	// Derived obj;
	// cout << "Derived value: " << obj.value << endl;
	// cout << "Base value: " << obj.Base::value << endl;
	// 3 Создайте классы A, B и C, где C наследуется от A и B. Продемонстрируйте проблему "ромбовидного наследования".
	// 4 Измените код, чтобы использовать виртуальное наследование и решить проблему ромбовидного наследования.
	// 5 Создайте несколько классов с конструкторами и деструкторами и проверьте порядок их вызова при множественном наследовании.
	// Derive d;
	// 6 Продемонстрируйте на примере, как можно переопределить метод базового класса и как вызвать этот метод из производного класса.
	Deriv dd;
	dd.print();

	return 0;
}