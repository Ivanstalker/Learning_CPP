#include <iostream>

using namespace std;

class Animal
{
protected:
	string name;
	int age;

public:
	Animal(string n, int a) : name(n), age(a) {}

	virtual void printInfo()
	{
		cout << "Имя: " << name << endl
			 << "Возраст: " << age << " лет" << endl;
	}
};

class Dog : public Animal
{
private:
	string breed;

public:
	Dog(string n, int a, string b) : Animal(n, a), breed(b) {}

	void printInfo() override
	{
		Animal::printInfo();
		cout << "Порода: " << breed << endl;
	}
};

class Car
{
protected:
	string brand;
	string model;

public:
	Car(string b, string m) : brand(b), model(m) {}

	Car(const Car &other) : brand(other.brand), model(other.model) {}

	virtual void printInfo()
	{
		cout << "Марка: " << brand << endl
			 << "Модель: " << model << endl;
	}
};

class ElectricCar : public Car
{
private:
	double batteryCapacity;

public:
	ElectricCar(string b, string m, double bc)
		: Car(b, m), batteryCapacity(bc) {}

	ElectricCar(const ElectricCar &other)
		: Car(other), batteryCapacity(other.batteryCapacity) {}

	void printInfo() override
	{
		Car::printInfo();
		cout << "Емкость аккумулятора: " << batteryCapacity << " кВт⋅ч" << endl;
	}
};

class Shape
{
protected:
	double width;
	double height;

public:
	Shape(double w, double h) : width(w), height(h) {}

	virtual void printInfo()
	{
		cout << "Ширина: " << width << ", Высота: " << height << endl;
	}
};

class Rectangle final : public Shape
{
public:
	Rectangle(double w, double h) : Shape(w, h) {}

	double getArea()
	{
		return width * height;
	}

	void printInfo() override
	{
		Shape::printInfo();
		cout << "Площадь прямоугольника: " << getArea() << endl;
	}
};

int main()
{
	// 	Задачи по главе 40: Наследование в C++
	// Задача 1: Наследование с публичным доступом
	// Создайте два класса: Animal (базовый класс) и Dog (производный класс). Класс Animal должен содержать атрибуты name (имя животного) и age (возраст). Класс Dog должен наследовать эти атрибуты и добавлять атрибут breed (порода). Реализуйте методы для вывода информации о животном и собаке.
	// Шаги:
	// 1.  Создайте базовый класс Animal с атрибутами и методом для вывода информации.
	// 2.  Создайте производный класс Dog, который будет наследовать от Animal и добавлять атрибут breed.
	// 3.  Реализуйте метод для вывода информации о собаке.
	// 4.  В функции main создайте объект класса Dog и вызовите метод для вывода информации.
	// Ожидаемый вывод:
	// Имя: Рекс
	// Возраст: 5 лет
	// Порода: Немецкая овчарка

	Dog rex("Рекс", 5, "Немецкая овчарка");
	rex.printInfo();

	// Задача 2
	ElectricCar tesla("Tesla", "Model S", 100);
	ElectricCar teslaCopy(tesla); // Использование конструктора копирования
	teslaCopy.printInfo();

	// Задача 3
	Rectangle rect(10, 5);
	rect.printInfo();

	return 0;
}