#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Library
{
public:
	class Book
	{
	private:
		string title;
		string author;

	public:
		Book(const string &t, const string &a) : title(t), author(a) {}

		void printInfo() const
		{
			cout << "Title: " << title << ", Author: " << author << endl;
		}
	};

private:
	vector<Book> books;

public:
	void addBook(const string &title, const string &author)
	{
		books.emplace_back(title, author);
	}

	void printAllBooks() const
	{
		for (const auto &book : books)
		{
			book.printInfo();
		}
	}
};


class Outer
{
private:
	int data;

public:
	Outer(int d) : data(d) {}

	class Inner
	{
	private:
		Outer &outer;

	public:
		Inner(Outer &o) : outer(o) {}

		void printData()
		{
			cout << "Outer data: " << outer.data << endl;
		}
	};

	void useInner()
	{
		Inner inner(*this);
		inner.printData();
	}
};


class Car
{
private:
	class Engine
	{
	private:
		bool isRunning;

	public:
		Engine() : isRunning(false) {}

		void start()
		{
			isRunning = true;
			cout << "Engine started!" << endl;
		}
	};

	Engine engine;

public:
	void startEngine()
	{
		engine.start();
	}
};

int main()
{
	// Задача 1
	Library library;
	library.addBook("The Catcher in the Rye", "J.D. Salinger");
	library.addBook("1984", "George Orwell");
	cout << "Library books:" << endl;
	library.printAllBooks();

	// Задача 2
	Outer outer(10);
	outer.useInner();

	// Задача 3
	Car car;
	car.startEngine();

	return 0;
}