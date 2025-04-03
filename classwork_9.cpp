#include <iostream>
#include <cstring>

using namespace std;

class Shape
{
public:
	virtual double area() = 0;
	virtual ~Shape() {}
};

class Circle : public Shape
{
public:
	double radius;
	Circle(double r) : radius(r) {}
	double area() override { return 3.14159 * radius * radius; }
};

class Rectangle : public Shape
{
public:
	int width, height;
	Rectangle(double w, double h) : width(w), height(h) {}
	double area() override { return width * height; }
};

class Vector
{
private:
	int x, y;

public:
	Vector(int x, int y) : x(x), y(y) {}

	Vector operator+(const Vector &other) const
	{
		return Vector(x + other.x, y + other.y);
	}

	Vector operator-(const Vector &other) const
	{
		return Vector(x - other.x, y - other.y);
	}

	void print() const
	{
		cout << '(' << x << ", " << y << ')' << endl;
	}
};

class MyString
{
private:
	char *data;
	size_t length;

public:
	MyString(const char *str = "") : length(strlen(str))
	{
		data = new char[length + 1];
		strcpy(data, str);
	}

	MyString(const MyString &other) : length(other.length)
	{
		data = new char[length + 1];
		strcpy(data, other.data);
	}

	MyString &operator=(const MyString &other)
	{
		if (this != &other)
		{
			delete[] data;
			length = other.length;
			data = new char[length + 1];
			strcpy(data, other.data);
		}
		return *this;
	}

	~MyString()
	{
		delete[] data;
	}

	void print() const
	{
		cout << data << endl;
	}
};

int main()
{
	// 1. Создайте абстрактный класс Shape с чистой виртуальной функцией area().
	// 2. Создайте производные классы Circle и Rectangle от Shape и реализуйте в них метод area().
	// 3. Создайте класс Vector с атрибутами x и y (целые числа)
	// 4. Перегрузите операторы + и - для сложения и вычитания векторов.
	Vector v1(1, 2), v2(3, 4);
	Vector v3 = v1 + v2;
	Vector v4 = v1 - v2;
	v3.print(); // Вывод: (4, 6)
	v4.print(); // Вывод: (-2, -2)
	// 6. Создайте класс с динамически выделенной памятью, а также перегрузите оператор присваивания для этого класса.
	// 7. Перегрузите префиксный и постфиксный операторы ++ и -- для некоторого класса.
	

	return 0;
}