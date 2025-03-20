#include <iostream>

using namespace std;

class Animal
{
public:
	virtual void makeSound() const
	{
		cout << "Animal sound." << endl;
	}
};

class Dog : public Animal
{
public:
	void makeSound() const override
	{
		cout << "Dog sound: woof woof!" << endl;
	}
};

class Cat : public Animal
{
public:
	void makeSound() const override
	{
		cout << "Cat sound: meow meow!" << endl;
	}
};

class Cow : public Animal
{
public:
	void makeSound() const override
	{
		cout << "Cow sound: moo moo!" << endl;
	}
};

void AnimalSound(Animal *animal)
{
	animal->makeSound();
}

class Shape
{
public:
	virtual double area()
	{
		return 0.0;
	}
};

class Circle : public Shape
{
private:
	double radius;

public:
	Circle(double r) : radius(r) {}

	double area() override
	{
		return 3.14159 * radius * radius;
	}
};

class Rectangle : public Shape
{
private:
	double width;
	double height;

public:
	Rectangle(double w, double h) : width(w), height(h) {}

	double area() override
	{
		return width * height;
	}
};

class Base
{
public:
	virtual void func() final
	{
		cout << "Base::func" << endl;
	}
};

class Derived : public Base
{
public:
	// void func() override
	// {
	// 	cout << "Derived::func" << endl; //eror 404
	// }
};

int main()
{
	// 1 Создайте класс Animal с виртуальным методом makeSound().
	// Animal animal;
	// animal.makeSound();
	// 2 Создайте производные классы Dog, Cat и Cow, которые переопределяют метод makeSound().
	// Dog dog;
	// Cat cat;
	// Cow cow;
	//
	// dog.makeSound();
	// cat.makeSound();
	// cow.makeSound();
	// 3 Напишите функцию, которая принимает указатель на Animal и вызывает метод makeSound(). Проверьте, как работает полиморфизм.
	// Dog dog;
	// AnimalSound(&dog);
	// 4 Создайте базовый класс Shape с виртуальным методом area().
	// 5 Создайте производные классы Circle и Rectangle, которые переопределяют метод area().
	// Circle circle(5.0);
	// Rectangle rectangle(4.0, 6.0);
	//
	// cout << "Площадь круга: " << circle.area() << endl;
	// cout << "Площадь прямоугольника: " << rectangle.area() << endl;
	// 6 Создайте базовый класс с виртуальным методом и переопределите его в производном классе.
	// Derived d;
	// d.func();
	// 7 Попробуйте запретить дальнейшее переопределение виртуальной функции в производных классах с помощью ключевого слова final.

	return 0;
}