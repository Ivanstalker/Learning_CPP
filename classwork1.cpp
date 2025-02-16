#include <iostream>

using namespace std;

int *getPtrArrInt(const int &size)
{
	int *arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}
	return arr;
}

int &getAdressArr(int *arr, int index)
{
	return arr[index];
}

int sum(int a, int b)
{
	return a + b;
}

double sum(double a, double b)
{
	return a + b;
}
void getNum(int num)
{
	cout << num << endl;
}

void getNum(int &num)
{
	cout << num << endl;
}

void getConst(const int &num)
{
	cout << "CONST INT" << endl;
}

void getConst(int &num)
{
	cout << "INT" << endl;
}
int main()
{
	// 1.  Напишите функцию, которая принимает размер массива и возвращает указатель на динамически созданный массив целых чисел.
	// int size = 10;
	// int *ptrArr = getPtrArrInt(size);
	// for (int i = 0; i < size; i++)
	// {
	//   cout << ptrArr[i] << " ";
	// }
	// delete[] ptrArr;
	// ptrArr = nullptr;

	// 2.  Напишите функцию, которая принимает массив целых чисел и индекс, и возвращает ссылку на элемент массива по этому индексу.
	// const int ARR[] = {1, 3, 5, 7, 1, 2, 0};
	// const int INDEX = 4;
	// cout << &getAdressArr(const_cast<int *>(ARR), INDEX) << endl;

	// 3.  Напишите перегруженные функции sum для суммирования целых и чисел с плавающей точкой (два и три параметра).
	// cout << sum(14, 11) << endl;
	// cout << sum(1.1, 1.9) << endl;

	// 4.  Напишите функцию, принимающую параметр по значению, и перегрузите ее, чтобы принимать параметр по ссылке.
	// getNum(14);
	// getNum(14);

	// 5.  Напишите функцию, принимающую параметр и перегрузите ее, чтобы принимать константный параметр.
	int c = 14;
	const int d = 14;
	getConst(c);
	getConst(d);

	return 0;
}