#include <iostream>

using namespace std;

class Temperature
{
private:
	double celsius;

public:
	Temperature(double c = 0.0) : celsius(c) {}

	operator float() const
	{
		return (celsius * 9.0 / 5.0) + 32.0;
	}
};
class Array
{
private:
	int *data;
	int size;

public:
	Array(int size) : size(size)
	{
		data = new int[size];
		for (int i = 0; i < size; ++i)
		{
			data[i] = 0;
		}
	}

	Array &operator=(const Array &other)
	{
		if (this != &other)
		{
			delete[] data;
			size = other.size;
			data = new int[size];
			for (int i = 0; i < size; ++i)
			{
				data[i] = other.data[i];
			}
		}
		return *this;
	}

	~Array()
	{
		delete[] data;
	}
};

class NonCopyable
{
public:
	NonCopyable &operator=(const NonCopyable &) = delete;
	NonCopyable(const NonCopyable &) = delete;
	NonCopyable() {}
};

int main()
{
	Temperature temp(25.0);
	float fahrenheit = temp;
	cout << "Температура в Фаренгейтах: " << fahrenheit << endl;

	// 2. Создайте класс Array с динамически выделенной памятью.
	// 3.Перегрузите оператор индексирования ([]) для доступа к элементам массива
	// 4. Реализуйте перегруженный оператор присваивания для корректного копирования массивов.
	// 5. Создайте класс, у которого будет удален оператор присваивания и попробуйте присвоить объект этого класса.
	NonCopyable obj1;
	// NonCopyable obj2 = obj1; // Ошибка: удаленный конструктор копирования
	// obj1 = obj1; // Ошибка: удаленный оператор присваивания
	return 0;
}