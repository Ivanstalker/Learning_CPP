#include <iostream>

using namespace std;

struct Point
{
	double x;
	double y;
};

struct Rectangle
{
	Point topleft;
	Point bottomRight;
};

struct Book
{
	string title;
	string author;
	int year;
};

enum LogLevel
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

struct LogEntry
{
	LogLevel level;
	string message;
};

void logMessage(LogLevel level, const string &message)
{
	switch (level)
	{
	case DEBUG:
		cout << "[DEBUG] " << message << endl;
		break;
	case INFO:
		cout << "[INFO] " << message << endl;
		break;
	case WARNING:
		cout << "[WARNING] " << message << endl;
		break;
	case ERROR:
		cout << "[ERROR] " << message << endl;
		break;
	}
}

enum DayOfWeek
{
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
	SUNDAY
};

int main()
{
	// 1.Создайте структуру Point с атрибутами x и y (числа с плавающей точкой).
	// Point p = {3.5, 2.7};
	// cout << "Point: (" << p.x << ", " << p.y << ")" << endl; // Вывод: Point: (3.5, 2.7)
	// 2.Создайте структуру Book с атрибутами title (строка), author (строка) и year (целое число).
	// Book book = {"1984", "George Orwell", 1949};
	// cout << "Книга: " << book.title << ", Автор: " << book.author << ", Год: " << book.year << endl;
	// 3.Объявите перечисление LogLevel с константами DEBUG, INFO, WARNING, ERROR.
	// LogLevel level = WARNING;
	// cout << "Loglevel: " << level << endl;
	// 4.Напишите функцию, которая принимает параметр типа LogLevel и выводит на
	// экран сообщение, соответствующее этому уровню логирования.
	// logMessage(DEBUG, "Это отладочное сообщение");
	// logMessage(ERROR, "Произошла ошибка!");
	// 5.Объявите перечисление с именованными константами для дней недели.
	// DayOfWeek day = FRIDAY;
	// cout << "Day of week: " << day << endl;
	// 6.Создайте структуру, в которой один из атрибутов будет иметь тип объявленного перечисления.
	// LogEntry entry = {WARNING, "Предупреждение: низкий заряд батареи"};
	// cout << "Уровень: " << entry.level << ", Сообщение: " << entry.message << endl;
	// 7. Создайте структуру, которая содержит в себе другую структуру.
	Rectangle rect = {{1.0, 4.0}, {5.0, 1.0}};
	cout << "Верхний левый угол: (" << rect.topleft.x << ", " << rect.topleft.y << ")" << endl;
	cout << "Нижний правый угол: (" << rect.bottomRight.x << ", " << rect.bottomRight.y << ")" << endl;
	return 0;
}