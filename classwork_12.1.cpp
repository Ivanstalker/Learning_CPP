#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	// 1.Создайте вектор целых чисел numbers со значениями {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}.
	//  Удалите из вектора все четные числа, используя функцию std::erase и итераторы.

	// vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	// for (auto i = numbers.begin(); i != numbers.end(); )
	// {
	// 	if (*i % 2 == 0){
	// 		i = numbers.erase(i);
	// 	}else{
	// 		++i;
	// 	}
	// }

	// for (int num : numbers)
	// {
	// 	cout << num << ' ';
	// }
	// cout << endl;

	// 2.Создайте два вектора целых чисел: source со значениями {10, 20, 30} и destination со значениями {1, 2, 3, 4, 5}.
	// Вставьте все элементы из вектора source в вектор destination после третьего элемента.

	// vector<int> source = {1, 2, 3, 4, 5};
	// vector<int> destrination = {10, 20, 30};

	// source.insert(source.begin() + 3, destrination.begin(), destrination.end());

	// for (int n : source)
	// {
	// 	cout << n << ' ';
	// }
	// cout << endl;

	// 3.Создайте два вектора строк: names1 со значениями {"Alice", "Bob", "Charlie"} и names2 со значениями {"David", "Eve"}. 
	// Обменяйте содержимое векторов местами, используя функцию swap. Выведите содержимое обоих векторов после обмена.

	// vector<string> names1 = {"Alice", "Bob", "Charlie"};
	// vector<string> names2 = {"David", "Eve"};

	// names1.swap(names2);

	// for (auto n : names1)
	// {
	// 	cout << n << " ";
	// }
	// cout << endl;
	// for (auto n : names2)
	// {
	// 	cout << n << ' ';
	// }
	// cout << endl;

	

	return 0;
}