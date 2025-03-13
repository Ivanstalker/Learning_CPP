#include <iostream>

using namespace std;

struct book
{
	string name = "1984";
	string autor = "George Orwell";
	double start = 1949;
};

void about_book(string name, string autor, double start)
{
	cout << "Name of book: " << name << endl
		 << "Autor: " << autor << endl
		 << "Start year: " << start;
	cout << endl
		 << endl;
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

void printDayOfWeek(DayOfWeek day)
{
	switch (day)
	{
	case MONDAY:
		cout << "Понедельник" << endl;
		break;
	case TUESDAY:
		cout << "Вторник" << endl;
		break;
	case WEDNESDAY:
		cout << "Среда" << endl;
		break;
	case THURSDAY:
		cout << "Четверг" << endl;
		break;
	case FRIDAY:
		cout << "Пятница" << endl;
		break;
	case SATURDAY:
		cout << "Суббота" << endl;
		break;
	case SUNDAY:
		cout << "Воскресенье" << endl;
		break;
	}
}

enum OrderStatus
{
	GENERATING,
	DELIVERY,
	DELIVERED
};

struct Order
{
	int orderID;
	string customerName;
	OrderStatus status;
};

void printOrderStatus(Order order)
{
	cout << "Заказ ID: " << order.orderID << ", Клиент: " << order.customerName << ", Статус: ";
	switch (order.status)
	{
	case GENERATING:
		cout << "В обработке";
		break;
	case DELIVERY:
		cout << "Отправлен";
		break;
	case DELIVERED:
		cout << "Доставлен";
		break;
	}
	cout << endl;
}

int main()
{
	// Задача 1: Структура для хранения информации о книге
	// Создайте структуру Book, которая будет хранить информацию о книге: название, автор и год выпуска. Реализуйте функцию, которая будет выводить информацию о книге. В функции main создайте объект этой структуры и вызовите функцию для вывода информации.
	// Шаги:
	// 1.  Объявите структуру Book с полями title (название), author (автор) и year (год выпуска).
	// 2.  Реализуйте функцию printBookInfo, которая будет выводить информацию о книге.
	// 3.  В функции main создайте объект структуры Book и вызовите функцию для вывода информации.
	// Ожидаемый вывод:
	// Название: 1984
	// Автор: George Orwell
	// Год выпуска: 1949
	book myBook; // Создаём переменную типа book
	about_book(myBook.name, myBook.autor, myBook.start);

	// Задача 2: Перечисление для дней недели
	// Создайте перечисление Day, которое будет хранить все дни недели, и функцию, которая будет принимать день недели и выводить его название. В функции main вызовите эту функцию для различных дней недели.
	// Шаги:
	// 1.  Создайте перечисление Day, которое будет содержать все дни недели.
	// 2.  Реализуйте функцию printDay, которая будет выводить день недели по его числовому значению.
	// 3.  В функции main вызовите функцию для вывода названий дней недели.
	// Ожидаемый вывод:
	// Понедельник
	// Пятница
	// Воскресенье

	printDayOfWeek(MONDAY);
	printDayOfWeek(FRIDAY);
	printDayOfWeek(SUNDAY);

	cout << endl;

	// Задача 3: Использование перечислений для статуса заказа
	// Создайте перечисление OrderStatus, которое будет содержать статусы заказа (например, "В обработке", "Отправлен", "Доставлен", "Отменен"). Используйте это перечисление в функции для проверки статуса заказа. Создайте структуру Order, которая будет содержать информацию о заказе, включая статус.

	// Шаги:
	// 1.  Создайте перечисление OrderStatus с несколькими возможными статусами.
	// 2.  Создайте структуру Order, которая будет содержать поля orderID, customerName и status (статус заказа).
	// 3.  Реализуйте функцию printOrderStatus, которая будет выводить статус заказа.
	// 4.  В функции main создайте несколько объектов структуры Order с разными статусами и выведите их статусы.
	// Ожидаемый вывод:
	// Заказ ID: 1001, Клиент: Иванов И.И., Статус: В обработке
	// Заказ ID: 1002, Клиент: Петров П.П., Статус: Отправлен
	// Заказ ID: 1003, Клиент: Сидоров С.С., Статус: Доставлен

	// Создание и вывод информации о заказах
	Order order1 = {1001, "Иванов И.И.", GENERATING};
	Order order2 = {1002, "Петров П.П.", DELIVERY};
	Order order3 = {1003, "Сидоров С.С.", DELIVERED};

	printOrderStatus(order1);
	printOrderStatus(order2);
	printOrderStatus(order3);

	return 0;
}