#include <iostream>

using namespace std;

int sum(int n)
{
	return n += sum(n - 1);
}

int sum_2(int a, int b)
{
	return a + b;
}

void even(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0 || i > 0)
		{
			cout << i << ' ';
		}
	}
	cout << endl;
}

void reverse_string(string name, int size)
{
	for (int i = size; i >= 0; i--)
	{
		cout << name[i];
	}
	cout << endl;
}

int divide(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}

int substruct(int a, int b)
{
	return a / b;
}

void refract(int (*func)(int, int))
{
	cout << func(10, 5);
}

int  perform_func_user(int a, int b, int (*f)(int,int)){
	return f(a,b);
}
int main()
{
	// 	1️⃣ Простая рекурсия:
	// Напишите рекурсивную функцию, которая считает сумму чисел от 1 до n.
	cout << "enter the final number: ";
	int n;
	cin >> n;

	cout << "sum of numbers from 1 to " << n << " is " << sum(n) << endl;

	// 2️⃣ Чётные и нечётные:
	// Реализуйте рекурсивную функцию, которая принимает массив и выводит только чётные элементы.
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	even(arr, 10);

	// 3️⃣ Разворот строки:
	// Напишите рекурсивную функцию, которая принимает строку и выводит её в обратном порядке.
	string name = "Hello world!";
	reverse_string(name, 11);

	// 	1.	Объявите указатель на функцию, которая принимает два целых числа и возвращает их сумму.
	int (*operation)(int,int);
	operation = sum_2;

	cout << operation(10, 10);

	// 2.	Создайте массив указателей на функции, каждая из которых выполняет одну из простых арифметических операций
	int (*func[])(int, int) = {sum_2, divide, multiply, substruct};

	// 3.	Напишите функцию, которая принимает указатель на другую функцию, и выполняет ее.
	int (*r)(int, int) = sum_2;
	refract(r);

	// 4.	Напишите программу, которая в зависимости от выбора пользователя вызывает соответствующую арифметическую функцию через указатель.
	cout << perform_func_user(5, 6, sum_2) << endl;

	return 0;
}
