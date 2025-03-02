#include <iostream>
#include "globals.h"

using namespace std;

void demonstrateArrayOperations()
{
	int arr[] = {5, 8, 2, 9, 1, 7, 3, 6, 4};
	int size = sizeof(arr) / sizeof(arr[0]);

	if (size > MAX_ARRAY_SIZE)
	{
		cout << "Ошибка: превышен максимальный размер массива!" << endl;
		return;
	}

	cout << "Работа с массивом:" << endl;
	cout << "Размер массива: " << size << " (максимально допустимый: " << MAX_ARRAY_SIZE << ")" << endl;

	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= MIN_VALUE && arr[i] <= MAX_VALUE)
		{
			sum += arr[i];
		}
		else
		{
			cout << "Значение " << arr[i] << " вне допустимого диапазона!" << endl;
		}
	}

	cout << "Сумма элементов массива: " << sum << endl;
}

void demonstrateConstants()
{
	cout << "\nДемонстрация констант:" << endl;
	cout << "Число PI: " << PI << endl;
	cout << "Разделитель: " << DELIMITER << endl;
	cout << "Диапазон значений: [" << MIN_VALUE << ", " << MAX_VALUE << "]" << endl;
}

void demonstrateGlobalCounter()
{
	cout << "\nДемонстрация глобального счетчика:" << endl;
	cout << "Начальное значение счетчика: " << globalCounter << endl;
	globalCounter++;
	cout << "После инкремента: " << globalCounter << endl;
	globalCounter += 5;
	cout << "После увеличения на 5: " << globalCounter << endl;
}

int main()
{
	cout << "=== Демонстрация работы с глобальными переменными и константами ===\n"
		 << endl;

	demonstrateArrayOperations();
	demonstrateConstants();
	demonstrateGlobalCounter();

	return 0;
}