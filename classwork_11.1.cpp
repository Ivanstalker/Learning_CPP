#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

int main()
{
	// 1.Создайте вектор типа double и инициализируйте его пятью значениями: 3.14, 2.71, 1.618, 0.577, 1.414.
	// vector<double> values = {3.14, 2.71, 1.618, 0.577, 1.414};
	// 2.Создайте вектор типа std::string со значениями "apple", "banana", "cherry".
	// Выведите каждый элемент вектора на отдельной строке, используя цикл for.
	vector<string> fruits = {"apple", "banana", "chery"};
	for (const std::string &fruit : fruits)
	{
		std::cout << fruit << std::endl;
	}
	// 3.Создайте вектор типа int со значениями {10, 20, 30, 40, 50}.
	// Попробуйте получить доступ к элементу с индексом 5, используя at().
	// Перехватите исключение std::out_of_range и выведите сообщение об ошибке.
	std::vector<int> numbers = {10, 20, 30, 40, 50};
	try
	{
		int value = numbers.at(5);
		std::cout << "Value at index 5: " << value << std::endl;
	}
	catch (const std::out_of_range &e)
	{
		std::cerr << "Error: Index out of range: " << e.what() << std::endl;
	}

	return 0;
}