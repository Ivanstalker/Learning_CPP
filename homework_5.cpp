#include <iostream>

using namespace std;

class Shape
{
public:
	virtual void draw() = 0;
	virtual ~Shape() {}
};

class Circle : public Shape
{
public:
	void draw() override
	{
		cout << "Рисую круг" << endl;
	}
};

class Square : public Shape
{
public:
	void draw() override
	{
		cout << "Рисую квадрат" << endl;
	}
};

class Animal
{
public:
	virtual void speak() = 0;
	virtual ~Animal() {}
};

class Dog : public Animal
{
public:
	void speak() override
	{
		cout << "Гав!" << endl;
	}
};

class Cat : public Animal
{
public:
	void speak() override
	{
		cout << "Мяу!" << endl;
	}
};

class Person
{
public:
	virtual void introduce()
	{
		cout << "Я человек" << endl;
	}
	virtual ~Person() {}
};

class Employee : public Person
{
public:
	void introduce() override final
	{
		cout << "Я сотрудник" << endl;
	}
};

/*
class Manager : public Employee {
public:
	void introduce() override {  //error 404
		cout << "Я менеджер" << endl;
	}
};
*/

int main()
{
	// 	Задача 1: Переопределение виртуальной функции
	// Создайте базовый класс Shape, который будет иметь виртуальную функцию draw(). Затем создайте два производных класса: Circle и Square, которые переопределят метод draw(). В функции main создайте массив указателей на Shape, которые будут указывать на объекты типа Circle и Square. Вызовите метод draw() для каждого объекта через указатель на базовый класс и продемонстрируйте полиморфизм.
	// Шаги:
	// 1.  Создайте класс Shape с виртуальной функцией draw().
	// 2.  Создайте классы Circle и Square, которые переопределяют метод draw().
	// 3.  В функции main создайте массив указателей на базовый класс и вызовите метод draw() для каждого объекта.
	// Ожидаемый вывод:
	// Рисую круг
	// Рисую квадрат
	Shape *shapes[2];

	shapes[0] = new Circle();
	shapes[1] = new Square();

	for (int i = 0; i < 2; i++)
	{
		shapes[i]->draw();
	}

	for (int i = 0; i < 2; i++)
	{
		delete shapes[i];
	}
	// 	Задача 2: Динамическое связывание и виртуальные функции
	// Реализуйте базовый класс Animal с виртуальной функцией speak(). Создайте два производных класса Dog и Cat, которые переопределяют метод speak(). В функции main создайте массив указателей на базовый класс Animal, который будет указывать на объекты типа Dog и Cat. Вызовите метод speak() через указатель на базовый класс и продемонстрируйте, как динамическое связывание вызывает правильную версию метода.
	// Шаги:
	// 1.  Создайте базовый класс Animal с виртуальной функцией speak().
	// 2.  Создайте классы Dog и Cat, которые переопределяют метод speak().
	// 3.  В функции main создайте массив указателей на базовый класс и вызовите метод speak() для каждого объекта.
	// Ожидаемый вывод:
	// Гав!
	// Мяу!

	Animal *animals[2];

	animals[0] = new Dog();
	animals[1] = new Cat();

	for (int i = 0; i < 2; i++)
	{
		animals[i]->speak();
	}

	for (int i = 0; i < 2; i++)
	{
		delete animals[i];
	}
	// 	Задача 3: Запрет переопределения виртуальной функции
	// Создайте базовый класс Person с виртуальной функцией introduce(). В производном классе Employee переопределите эту функцию и используйте ключевое слово final для запрета дальнейшего переопределения функции в других классах. Попробуйте создать еще один класс, который попытается переопределить метод introduce(), и покажите, что это приведет к ошибке компиляции.

	// Шаги:
	// 1.  Создайте базовый класс Person с виртуальной функцией introduce().
	// 2.  Создайте класс Employee, который переопределяет метод introduce() с использованием final.
	// 3.  Попробуйте создать класс, который будет переопределять introduce(), и покажите ошибку компиляции.
	// Ожидаемый вывод:
	// Я сотрудник

	Person *person = new Employee();
	person->introduce();
	delete person;

	return 0;
}