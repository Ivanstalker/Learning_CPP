#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
	// 1 Создайте список std::list<std::string> и добавьте в него названия пяти различных городов, используя push_back и push_front.
	// Выведите список городов на экран.
	std::list<std::string> cities;
	cities.push_back("New York");
	cities.push_back("Los Angeles");
	cities.push_back("Chicago");
	cities.push_front("Houston");
	cities.push_front("Phoenix");
	cities.push_front("San Francisco");
	for (const auto& city : cities) {
		std::cout << city << std::endl;
	}
	// 2 Создайте список std::list<int> и заполните его числами от 1 до 10. Удалите первый и последний элементы списка, используя pop_front и pop_back.
	// Выведите оставшиеся элементы списка.
	std::list<int> numbers;
	for (int i = 1; i <= 10; ++i) {
		numbers.push_back(i);
	}
	numbers.pop_front();
	numbers.pop_back();
	for (const auto& number : numbers) {
		std::cout << number << " ";
	}
	//3 Создайте список std::list<int> и заполните его числами от 1 до 5. Вставьте число 42 в середину списка (после числа 3), используя функцию insert и итераторы.
	// Выведите список на экран.
	std::list<int> numbers2;
	for (int i = 1; i <= 5; ++i) {
		numbers2.push_back(i);
	}
	auto it = std::next(numbers2.begin(), 3); // Итератор на число 3
	numbers2.insert(it, 42);
	for (const auto& number : numbers2) {
		std::cout << number << " ";
	}

}