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

	~MyString()
	{
		delete[] str;
	}

	
	operator int() const
	{
		return strlen(str);
	}

	const char *getStr() const
	{
		return str;
	}
};

class MyInt
{
private:
	int value;

public:
	
	MyInt(const MyString &s) : value(strlen(s.getStr())) {}

	int getValue() const
	{
		return value;
	}
};


class Matrix
{
private:
	int data[3][3];

public:
	Matrix()
	{
		int count = 1;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				data[i][j] = count++;
			}
		}
	}


	int *operator[](int index)
	{
		return data[index];
	}


	const int *operator[](int index) const
	{
		return data[index];
	}

	void print() const
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << data[i][j] << " ";
			}
			cout << endl;
		}
	}
};

class MyString2
{
private:
	char *str;

public:
	MyString2(const char *s)
	{
		str = new char[strlen(s) + 1];
		strcpy(str, s);
	}

	~MyString2()
	{
		delete[] str;
	}

	
	MyString2 &operator=(const MyString2 &) = delete;

	void print() const
	{
		cout << "String: " << str << endl;
	}
};

int main()
{
	// Задача 1
	MyString s("Hello, World!");
	cout << "Length of string: " << (int)s << endl;

	MyInt i(s);
	cout << "MyInt: " << i.getValue() << endl;

	// Задача 2
	Matrix m;
	cout << "Matrix elements:" << endl;
	m.print();

	// Демонстрация оператора индексирования
	cout << "Element at [1][1]: " << m[1][1] << endl;

	// Задача 3
	MyString2 str1("Hello");
	str1.print();
	// MyString2 str2 = MyString2("World");

	return 0;
}