#include <iostream>

using namespace std;

class Rectangle
{
private:
	double width;
	double height;

public:
	Rectangle(double w, double h) : width(w), height(h) {}

	double rectangleArea() const
	{
		return width * height;
	}
};

class BankAccount
{
private:
	double balance;

public:
	BankAccount(double b) : balance(b) {}

	void deposit(double amount)
	{
		if (amount > 0)
			balance += amount;
	}

	void withdraw(double amount)
	{
		if (amount > 0 && amount <= balance)
			balance -= amount;
	}

	double getBalance() const
	{
		return balance;
	}
};

class Car
{
private:
	string model;
	double speed;

public:
	Car(string m, double s) : speed(s), model(m) {}

	void increaseSpeed(int increment)
	{
		speed += increment;
	}

	void decreaseSpeed(int increment)
	{
		speed -= increment;
	}

	void getInfo() const
	{
		cout << "Model: " << model << ", Speed: " << speed;
	}
};

class Counter
{
private:
	int count;

public:
	Counter(int c) : count(c) {}

	void setCount(int count)
	{
		this->count = count;
	}

	int getCount() const
	{
		return count;
	}

	void increment()
	{
		count++;
	}

	void decrement()
	{
		count--;
	}
};

int main()
{
	// 1. Создайте класс Rectangle с приватными атрибутами width и height.

	// 2. Добавьте в класс Rectangle метод для вычисления площади прямоугольника.
	// Rectangle r1 = Rectangle(10, 5);
	// cout << r1.rectangleArea() << endl;

	// 3. Создайте класс BankAccount с приватным атрибутом balance.
	// 4. добавьте в класс BankAccount методы для внесения депозита, снятия средств и получения текущего баланса.
	// BankAccount b1(1000);
	// b1.deposit(554);
	// b1.withdraw(200);
	// cout << b1.getBalance() << endl;

	// 5. Создайте класс Car с приватными атрибутами model и speed.
	// 6. Добавьте в класс Car методы для увеличения и уменьшения скорости.
	// Car c1("Ferrari", 250);
	// c1.increaseSpeed(10);
	// c1.decreaseSpeed(20);
	// c1.getInfo();

	// 7. Создайте класс Counter с приватным атрибутом count.
	// 8. Добавьте в класс Counter методы для увеличения, уменьшения и получения текущего значения счетчика.
	Counter c1(1);
	c1.increment();
	c1.decrement();
	c1.increment();
	cout << "Counter: " << c1.getCount() << endl;

	return 0;
}