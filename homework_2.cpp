#include <iostream>
#include <cstring>

using namespace std;

class MyString
{
private:
	char *str;

public:
	MyString(const char *s)
	{
		str = new char[strlen(s) + 1];
		strcpy(str, s);
	}

	// конструктор копирования
	/*MyString(const MyString &other)
	{
		str = new char[strlen(other.str) + 1];
		strcpy(str, other.str);
	}*/

	// удаление конструктора копирования
	MyString(const MyString &other) = delete;

	~MyString()
	{
		delete[] str;
	}

	void print() const
	{
		cout << str << endl;
	}
};

class MyClass
{
private:
	int value;

public:
	MyClass(int v) : value(v) {}

	void print() const
	{
		cout << "Value: " << value << endl;
	}

	void setValue(int v)
	{
		value = v;
	}
};

class Counter
{
private:
	mutable int accessCount; // mutable позволяет изменять переменную в const методах
	int value;

public:
	Counter(int v) : value(v), accessCount(0) {}

	int getValue() const
	{
		accessCount++; // можно изменять mutable переменную в const методе
		return value;
	}

	void printStats() const
	{
		cout << "Значение: " << value << endl;
		cout << "Количество обращений: " << accessCount << endl;
	}
};

class ThisDemo
{
private:
	int id;

public:
	ThisDemo(int id) : id(id) {}

	void printAddress() const
	{
		cout << "ID объекта: " << id << endl;
		cout << "Адрес объекта: " << this << endl;
	}

	ThisDemo *getThis()
	{
		return this;
	}
};

int main()
{
	// 1. Создайте класс MyString с указателем на динамически выделенную память под строку.
	MyString s("Hello");
	s.print();

	// 2. Реализуйте конструктор копирования для класса MyString.
	// 3. Протестируйте работу конструктора копирования с и без удаления.
	MyString s1("Hello");
	// MyString s2 = s1; // error
	// s2.print(); // error
	// 4.Создайте константный объект класса MyClass и вызовите константный и не константный метод.
	const MyClass obj(10);
	obj.print();

	const Counter counter(42);
	counter.getValue();
	counter.getValue();
	counter.printStats(); // выведет значение и количество обращений (2)

	ThisDemo obj1(1);
	ThisDemo obj2(2);

	obj1.printAddress(); // выведет адрес первого объекта
	obj2.printAddress(); // выведет адрес второго объекта

	return 0;
}