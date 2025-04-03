#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <memory>

using namespace std;

class InputException : public runtime_error
{
public:
	InputException(string message) : runtime_error(message) {}
};

class ErrorCodeException : public runtime_error
{
private:
	int errorCode;

public:
	ErrorCodeException(string message, int code) : runtime_error(message), errorCode(code) {}

	int getErrorCode() const
	{
		return errorCode;
	}
};

void processValue(int value)
{
	if (value == 0)
	{
		throw invalid_argument("Value shouldn`t be 0!");
	}
	else if (value < 0)
	{
		throw InputException("Value can`t be oposite!");
	}
	else
	{
		cout << "Processing the value: " << value << endl;
	}
}

int main()
{
	// 1.Создайте свой класс исключения для обработки ошибок ввода данных.
	// 2.Создайте класс исключения, который имеет дополнительный атрибут для хранения кода ошибки
	// 3.Напишите функцию, которая генерирует несколько различных типов исключений.
	// 4.Напишите программу, которая обрабатывает все стандартные исключения, которые мы рассматривали в этой главе.

	try
	{
		vector<int> vec2(1000000000000); // std::length_error
	}
	catch (const length_error &ex)
	{
		cerr << "Ошибка std::length_error: " << ex.what() << endl;
	}

	try
	{
		int *arr = new int[1000000000000]; // std::bad_alloc
	}
	catch (const bad_alloc &ex)
	{
		cerr << "Ошибка std::bad_alloc: " << ex.what() << endl;
	}

	try
	{
		// Создаем базовый класс и производный класс для демонстрации bad_cast
		class Base
		{
		public:
			virtual ~Base() {}
		};
		class Derived : public Base
		{
		};

		Base *basePtr = new Base();
		Derived *derivedPtr = dynamic_cast<Derived *>(basePtr); // Вызовет bad_cast
		delete basePtr;											// Освобождаем память
	}
	catch (const bad_cast &ex)
	{
		cerr << "Ошибка std::bad_cast: " << ex.what() << endl;
	}

	try
	{
		// Демонстрация bad_typeid
		class Base
		{
		public:
			virtual ~Base() {}
		};
		Base *ptr = nullptr;
		typeid(*ptr); // Вызовет bad_typeid
	}
	catch (const bad_typeid &ex)
	{
		cerr << "Ошибка std::bad_typeid: " << ex.what() << endl;
	}

	try
	{
		// Демонстрация invalid_argument из функции processValue
		processValue(0);
	}
	catch (const invalid_argument &ex)
	{
		cerr << "Ошибка std::invalid_argument: " << ex.what() << endl;
	}

	return 0;
}