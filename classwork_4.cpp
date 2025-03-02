#include <iostream>
#include <memory>
#include <ctime>
#include <cstring> // для strlen и strcpy

using namespace std;

char *createString(const char *source)
{
	int lenght = strlen(source);
	char *str = new char[lenght + 1];
	strcpy(str, source);
	return str;
}

void printMatrix(int** matrix, const int rows, const int cols){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}
}

int main()
{
	srand(time(nullptr));

	// 1. Выделите динамическую память для массива целых чисел, заполните его значениями и выведите на экран.

	// int size = 5;
	// int *ptr = new int[size];

	// for (int i = 0; i < size; i++)
	// {
	// 	ptr[i] = rand() % 10;
	// }

	// for (int i = 0; i < size; i++)
	// {
	// 	cout << ptr[i] << " ";
	// }

	// delete[] ptr; // освобождаем память

	// 2. Выделите динамическую память для двумерного массива, заполните его значениями и выведите на экран.

	// const int SIZE = 10;
	// int *matrix = new int[SIZE, SIZE];

	// for (int i = 0; i < SIZE; i++)
	// {
	// 	for (int j = 0; j < SIZE; j++)
	// 	{
	// 		matrix[i, j] = i, j;
	// 	}
	// }

	// for (int i = 0; i < SIZE; i++)
	// {
	// 	for (int j = 0; j < SIZE; j++)
	// 	{
	// 		cout << matrix[i, j] << ' ';
	// 	}
	// 	cout << endl;
	// }

	// 3. Используйте unique_ptr для управления динамически выделенным массивом.

	// const int SIZE = 10;
	// unique_ptr<int[]> arr(new int[SIZE]);

	// for (int i = 0; i < SIZE; i++)
	// {
	// 	arr[i] = rand() % 10;
	// }

	// for (int i = 0; i < SIZE; i++){
	// 	cout << arr[i] << ' ';
	// }
	// cout << endl;

	// 4. Напишите функцию, которая динамически выделяет память под строку и возвращает указатель на эту строку.

	// const char* text = "Hello, World!";
	// char* dinamicString = createString(text);

	// cout << "Dynamic string: " << dinamicString << endl;
	// delete[] dinamicString;

	//5. Напишите функцию, которая принимает двумерный массив (динамически выделенный) и его размеры, и выводит все его элементы.

	// const int ROWS = 5, COLS = 2;
	// int **matrix = new int *[ROWS];

	// for (int i = 0; i < ROWS; i++){
	// 	matrix[i] = new int[COLS];
	// }

	// for (int i = 0; i < ROWS; i++){
	// 	for (int j = 0; j < COLS; j++){
	// 		matrix[i][j] = rand() % 10;
	// 	}
	// }
	// printMatrix(matrix, ROWS, COLS);
	// for (int i = 0; i < ROWS; i++){
	// 	delete[] matrix[i];
	// }
	// delete[] matrix;

	return 0;
}