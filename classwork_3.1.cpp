#include <iostream>
#include <functional>
#include "globals.h"

using namespace std;

int add(int a, int b)
{
	return a + b;
}

int substruct(int a, int b)
{
	return a - b;
}

function<int(int, int)> getOperation(char op)
{
	if (op == '+')
	{
		return add;
	}
	else if (op == '-')
	{
		return substruct;
	}
	return {};
}

int findMax(int arr[], int size)
{
	if (size > MAX_ARRAY_SIZE)
	{
		cout << "Размер массива превышает допустимый!" << endl;
		return 0;
	}

	int max = MIN_VALUE;
	for (int i = 0; i < size; i++)
	{
		max = max < arr[i] ? arr[i] : max;
	}
	return max;
}

auto getFunc(int arr[], int size)
{
	return findMax(arr, size);
}

void printA(string s)
{
	cout << "*** " << s << " ***" << endl;
}

void printB(string s)
{
	cout << "=== " << s << " ===" << endl;
}

auto getPrint(char c) -> void (*)(string)
{
	if (c == '*')
	{
		return printA;
	}
	else if (c == '=')
	{
		return printB;
	}

	return {};
}

int main()
{
	globalCounter++; // используем глобальную переменную
	cout << "Значение глобального счетчика: " << globalCounter << endl;

	cout << "Максимально допустимый размер массива: " << MAX_ARRAY_SIZE << endl;
	cout << "Значение PI: " << PI << endl;
	cout << "Диапазон допустимых значений: от " << MIN_VALUE << " до " << MAX_VALUE << endl;

	//   auto operation = getOperation('+');
	//   if (operation != nullptr)
	//   {
	//     cout << "Результат: " << operation(10, 5) << endl;
	//   }
	//   operation = getOperation('-');
	//   if (operation != nullptr)
	//   {
	//     cout << "Результат: " << operation(10, 5) << endl;
	//   }
	//   operation = getOperation('*');
	//   if (operation == nullptr)
	//   {
	//     cout << "Error!\n";
	//   }

	// 1.  Напишите функцию, которая возвращает указатель на одну из простых арифметических функций (сложение, вычитание), в зависимости от переданного символа.
	// 2.  Напишите функцию, которая принимает массив целых чисел и возвращает указатель на функцию, которая ищет максимальное значение в массиве.
	/*int arr[] = {1, 2, 3, 4, 5, 9, -1, 4, 67, 3};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Max: " << getFunc(arr, size) << endl;*/

	// 3.  Напишите функцию, которая возвращает указатель на функцию, которая печатает переданную строку с определенным форматом.
	// string s = "Hello world!";
	// auto print = getPrint('*');
	// print(s);
	// print = getPrint('=');
	// print(s);

	return 0;
}