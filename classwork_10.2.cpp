#include <iostream>

using namespace std;

template <typename T>
T findMax(T arr[], int size) {
   if (size <= 0) {
       throw invalid_argument("Размер массива должен быть положительным");
   }
   T maxVal = arr[0];
   for (int i = 1; i < size; ++i) {
       if (arr[i] > maxVal) {
           maxVal = arr[i];
       }
   }
   return maxVal;
}

template <typename T>
void swapValues(T& a, T& b){
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
double average(T arr[], int size){
	if (size <= 0){
		throw invalid_argument("Размер массива должен быть положительным!");
	}
	double sum = 0;
	for (int i = 0; i < size; ++i){
		sum += arr[i];
	}
	return sum / size;
}

template <typename T1, typename T2>
auto multiply(T1 a, T2 b) -> decltype(a * b){
	return a * b;
}

template <typename T>
void printArray(T arr[], int size){
	for (int i = 0; i < size; ++i){
		cout << arr[i] << ' ';
	}
	cout << endl;
}

template <typename T1, typename T2>
auto add(T1 a, T2 b) -> decltype(a + b){
	return a + b;
}

template <typename T, int size>
void printArray(T arr[]){
	for (int i = 0; i < size; ++i){
		cout << arr[i] << ' ';
	}
	cout << endl;
}

int main() {
	// 1.Создайте шаблон функции для поиска максимального значения в массиве.
	// 2.Создайте шаблон функции для обмена значений двух переменных
	// 3.Создайте шаблон функции для вычисления среднего арифметического значения элементов массива.
	// 4.Создайте шаблон функции, которая принимает два аргумента и возвращает их произведение.
	// 5.Создайте шаблон функции для вывода массива на экран, с разным типом данных.
	// 6.Используйте auto и decltype для автоматического выведения типа возвращаемого значения шаблонной функции.
	// 7.Попробуйте создать шаблон, который принимает параметр типа и нетиповой параметр.

}