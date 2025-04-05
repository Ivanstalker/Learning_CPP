#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <vector>

using namespace std;

template <typename T>
class Stack
{
private:
	stack<T> data;

public:
	void push(T value)
	{
		data.push(value);
	}

	T pop()
	{
		if (data.empty())
		{
			throw out_of_range("Stack is empty!");
		}
		T top = data.top();
		data.pop();
		return top;
	}

	T peek() const
	{
		if (data.empty())
		{
			throw out_of_range("Stack is empty!");
		}
		return data.top();
	}

	bool isEmpty() const
	{
		return data.empty();
	}
};

template <typename T>
class Queue
{
private:
	queue<T> data;

public:
	void enqueue(T value)
	{
		data.push(value);
	}

	T dequeue()
	{
		if (data.empty())
		{
			throw out_of_range("Queue is empty!");
		}
		T front = data.front();
		data.pop();
		return front;
	}
	T front() const
	{
		if (data.empty())
		{
			throw out_of_range("Queue is empty!");
		}
		return data.front();
	}

	bool isEmpty() const
	{
		return data.empty();
	}
};

template <typename T1, typename T2>
class Pair
{
public:
	T1 first;
	T2 second;

	Pair(T1 firstValue, T2 secondValue) : first(firstValue), second(secondValue) {}

	void print() const
	{
		cout << "First: " << first << endl
			 << "Second: " << second << endl;
	}
};

template <typename T>
class MyClass
{
public:
	void print(T value)
	{
		cout << "Generic value: " << value << endl;
	}
};

template <>
class Myclass<string>
{
public:
	void print(string value)
	{
		cout << "Specialised string value: " << value << endl;
	}
};

template <typename T>
class Matrix
{
private:
	vector<vector<T>> data;
	int rows, cols;

public:
	Matrix(int r, int c) : rows(r), cols(c), data(rows, vector<T>(cols, 0)) {}

	void print() const
	{
		for (int i = 0; i < rows; ++i)
		{
			for (int j = 0; j < cols; ++j)
			{
				cout << data[i][j] << " ";
			}
			cout << endl;
		}
	}
};

// Специализация для int
template <>
class Matrix<int>
{
private:
	vector<vector<int>> data;
	int rows, cols;

public:
	Matrix(int rows, int cols) : rows(rows), cols(cols), data(rows, vector<int>(cols, 1)) {}

	void print() const
	{
		cout << "Integer Matrix:" << endl;
		for (int i = 0; i < rows; ++i)
		{
			for (int j = 0; j < cols; ++j)
			{
				cout << data[i][j] << " ";
			}
			cout << endl;
		}
	}
};
}

int main()
{
	// 1.Создайте шаблон класса Stack для реализации стека с методами push, pop, peek и isEmpty.
	Stack<int> st1;
	cout << st1.isEmpty() << endl;
	st1.push(1);
	st1.push(5);
	cout << st1.pop() << endl;
	cout << st1.peek() << endl;
	// 2.Создайте шаблон класса Queue для реализации очереди с методами enqueue, dequeue, front и isEmpty.
	// 3.Создайте шаблон класса Pair для хранения пары значений с разными типами данных.
	// 4.Создайте специализированную версию шаблона MyClass для типа std::string.
	// 5.Создайте шаблонный класс для представления матрицы, и используйте специализацию для int и float.
}