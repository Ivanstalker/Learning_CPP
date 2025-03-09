#include <iostream>
#include <fstream>

using namespace std;

class Counter
{
private:
	int count;

public:
	Counter() : count(0) {};
	friend void incrementCout(Counter &obj);

	void printCount()
	{
		cout << "Count: " << count << endl;
	}
};

void incrementCout(Counter &obj)
{
	cout << "Increment: " << ++(obj.count) << endl;
};

class Logger
{
private:
	ofstream logFile;

public:
	Logger(const string &filename)
	{
		logFile.open(filename);
	}

	~Logger()
	{
		logFile.close();
	}

	void log(const string &message)
	{
		logFile << message << endl;
	}
};

class DataProcessor
{
private:
	Logger &logger;

public:
	DataProcessor(Logger &log) : logger(log) {}

	void process()
	{
		logger.log("Данные обработаны"); // Доступ к приватному методу Logger
	}

	// Объявление дружественного класса
	friend class Logger;
};

class IdGeneator
{
private:
	static int nextId;

public:
	static int generateId()
	{
		return nextId++;
	}
};

int IdGeneator::nextId = 1;

class MyClass
{
private:
	int *data;

public:
	MyClass(int size)
	{
		data = new int[size]; // Динамическое выделение памяти
	}

	~MyClass()
	{
		delete[] data; // Освобождение памяти
		cout << "Деструктор вызван" << endl;
	}
};

class Class
{
public:
	static const int MAX_SIZE = 100;
};

class SClass
{
public:
	static void staticMethod()
	{
		cout << "Статический метод" << endl;
	}

	void regularMethod()
	{
		cout << "Обычный метод" << endl;
	}
};

int main()
{
	// 1️. Создайте класс Counter с приватным атрибутом count и дружественной функцией,
	// которая может увеличивать значение счётчика.
	// Counter obj1;
	// incrementCout(obj1);
	// incrementCout(obj1);
	// obj1.printCount();
	// // 2. Создайте класс Logger, который пишет сообщения в файл.
	// // Сделайте этот класс другом другого класса DataProcessor, который использует Logger для записи логов.
	// Logger logger("log.txt");
	// DataProcessor processor(logger);
	// processor.process();
	// // 3. Создайте класс IdGenerator, который генерирует уникальные ID для создаваемых объектов. Используйте
	// // статический атрибут для хранения текущего ID и статический метод для его получения.
	// cout << "ID 1: " << IdGeneator::generateId() << endl;
	// cout << "ID 2: " << IdGeneator::generateId() << endl;
	// // 4. Создайте класс, который динамически выделяет память в конструкторе и освобождает её в деструкторе
	// MyClass obj(10);

	// 5. Создайте класс, содержащий статический константный атрибут.
	//  cout << "Max_size: " << Class::MAX_SIZE << endl;

	// 6. Создайте класс, где один метод статический, а другой обычный.
	SClass::staticMethod(); // Вызов статического метода
	SClass obj;
	obj.regularMethod();
	return 0;
}