#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// Создайте вектор типа std::string, в который можно добавить названия своих любимых фильмов.
	// Позвольте пользователю вводить названия фильмов с клавиатуры. После ввода выведите весь список фильмов на экран.
	cout << "Write your favourite films: ";
	vector<string> films;
	while (true)
	{
		string user;
		cin >> user;
		if (user != " ")
		{
			films.push_back(user);
		}else if (user == " "){
			break;
		}
	}
	for (auto &film : films){
		cout << film << ' ';

	}
	cout << endl;
}