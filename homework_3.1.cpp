#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string name;
	int age;

public:
	Person(string n, int a) : name(n), age(a) {}

	friend void printPersonInfo(const Person &p);
};

void printPersonInfo(const Person &p)
{
	cout << "Имя: " << p.name << ", Возраст: " << p.age << endl;
}

class Engine
{
private:
	string engineType;

public:
	Engine(string type) : engineType(type) {}
	string getEngineType() const { return engineType; }
};

class Car
{
private:
	string model;
	int year;
	Engine *carEngine;

public:
	Car(string m, int y, Engine *e) : model(m), year(y), carEngine(e) {}

	void printCarInfo() const
	{
		cout << "Модель машины: " << model
			 << ", Год выпуска: " << year
			 << ", Тип двигателя: " << carEngine->getEngineType() << endl;
	}
};

class Student
{
private:
	static int count;
	string name;

public:
	Student(string n) : name(n)
	{
		count++;
	}

	~Student()
	{
		count--;
	}

	static int getCount()
	{
		return count;
	}
};

int Student::count = 0;

int main()
{
	// Напишите класс Person, который имеет приватные атрибуты name (имя) и age (возраст).
	//  Реализуйте дружественную функцию printPersonInfo, которая будет выводить информацию о человеке, обращаясь напрямую к приватным членам класса.
	// Шаги:
	// 1.  Создайте класс Person с приватными атрибутами name и age.
	// 2.  Объявите функцию printPersonInfo дружественной для класса Person.
	// 3.  В функции main создайте объект класса Person и вызовите дружественную функцию для вывода информации о человеке.
	// Ожидаемый вывод:
	// Имя: John, Возраст: 30

	Person person("John", 30);
	printPersonInfo(person);

	// Задача 2: Дружественные классы
	// Реализуйте два класса: Car и Engine. Класс Engine должен быть дружественным для класса Car, чтобы иметь доступ к его приватным данным. Класс Car будет содержать информацию о машине, а класс Engine — информацию о двигателе. Создайте объект Car, который будет содержать объект Engine.
	// Шаги:
	// 1.  Создайте класс Car с приватными аттрибутами model и year.
	// 2.  Создайте класс Engine с приватным аттрибутом engineType.
	// 3.  Объявите класс Engine дружественным для класса Car, чтобы он мог получить доступ к его приватным данным.
	// 4.  Реализуйте методы для вывода информации о машине и двигателе.
	// 5.  В функции main создайте объект Car и объект Engine, и выведите информацию о машине и двигателе.
	// Ожидаемый вывод:
	// Модель машины: Tesla, Год выпуска: 2020, Тип двигателя: Electric

	Engine *electric = new Engine("Electric");
	Car tesla("Tesla", 2020, electric);
	tesla.printCarInfo();
	delete electric;

	// Задача 3: Статические члены класса и деструктор
	// Реализуйте класс Student, который будет хранить количество студентов в классе как статическую переменную. Также добавьте деструктор для освобождения ресурсов (например, если бы класс работал с динамической памятью). Создайте несколько объектов класса Student и выведите количество студентов после создания и уничтожения объектов.
	// Шаги:
	// 1.  Создайте класс Student с приватной статической переменной count, которая будет хранить количество студентов.
	// 2.  В конструкторе увеличьте count на 1 каждый раз, когда создается новый объект.
	// 3.  В деструкторе уменьшайте count на 1 при уничтожении объекта.
	// 4.  В функции main создайте несколько объектов класса Student и выведите количество студентов до и после удаления объектов.
	// Ожидаемый вывод:
	// Количество студентов: 0
	// Количество студентов: 2
	// Количество студентов: 3
	// Количество студентов после удаления третьего объекта: 2

	cout << "Количество студентов: " << Student::getCount() << endl;

	Student s1("Иван");
	Student s2("Петр");
	cout << "Количество студентов: " << Student::getCount() << endl;

	Student s3("Сергей");
	cout << "Количество студентов: " << Student::getCount() << endl;

	{
		Student s4("Анна");
		cout << "Количество студентов: " << Student::getCount() << endl;
	}

	cout << "Количество студентов после удаления объекта: " << Student::getCount() << endl;

	return 0;
}