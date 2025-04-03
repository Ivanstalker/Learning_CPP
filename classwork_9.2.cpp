#include <iostream>

using namespace std;

class LinkedList
{
public:
	class Node
	{
	public:
		int data;
		Node *next;

		Node(int data) : data(data), next(nullptr) {}
	};

private:
	Node *head;

public:
	LinkedList() : head(nullptr) {}

	void addNode(int data)
	{
		Node *newNode = new Node(data);
		newNode->next = head;
		head = newNode;
	}

	void printList()
	{
		Node *current = head;
		while (current != nullptr)
		{
			cout << current->data << " ";
			current = current->next;
		}
		cout << endl;
	}
};

class Computer
{
public:
	class CPU
	{
	public:
		string model;

		CPU(string model) : model(model) {}

		void printModel()
		{
			cout << "CPU Model: " << model << endl;
		}
	};

	class Memory
	{
	public:
		int size;

		Memory(int size) : size(size) {}

		void printSize()
		{
			cout << "Memory Size: " << size << "GB" << endl;
		}
	};

private:
	CPU cpu;
	Memory memory;

public:
	Computer(string cpuModel, int memorySize) : cpu(cpuModel), memory(memorySize) {}

	void printComputerInfo()
	{
		cpu.printModel();
		memory.printSize();
	}
};

class Outer
{
private:
	class Inner
	{
	public:
		void printMessage()
		{
			cout << "Private Inner class" << endl;
		}
	};

public:
	void outerMethod()
	{
		Inner inner;
		inner.printMessage();
	}
};

class POuter
{
public:
	class PublicInner
	{
	public:
		void printMessage()
		{
			cout << "Public Inner class" << endl;
		}
	};

private:
	class PrivateInner
	{
	public:
		void printMessage()
		{
			cout << "Private Inner class" << endl;
		}
	};
};

int main()
{
	// 1. Создайте класс LinkedList, внутри которого определите класс Node для представления узла списка.
	LinkedList list;
	list.addNode(10);
	list.addNode(20);
	list.printList();
	// 3. Создайте класс Computer, внутри которого определите класс CPU и класс Memory для представления компонентов компьютера.
	Computer computer("Intel i7", 16);
	computer.printComputerInfo();
	// 4. Создайте класс Outer с приватным вложенным классом Inner и создайте публичный метод для работы с приватным вложенным классом.

	Outer outer;
	outer.outerMethod();
	// 5. Попробуйте создать объект вложенного класса вне внешнего класса (проверьте модификаторы доступа).
	POuter::PublicInner publicInner; // OK
	publicInner.printMessage();
	// Outer::PrivateInner privateInner; // Ошибка: PrivateInner недоступен
	return 0;
}