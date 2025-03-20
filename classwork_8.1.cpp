#include <iostream>

using namespace std;

class Base
{
protected:
	virtual void func() { cout << "Base::func" << endl; };

	virtual ~Base()
	{
		cout << "Base::~base" << endl;
	}

	void protectedMethod() { cout << "Base::protectedMethod()" << endl; }
};

class Derived : public Base
{
public:
	using Base::protectedMethod;
	void func() override { cout << "Derived::func" << endl; };
	~Derived() override
	{
		cout << "Derived::~derived" << endl;
	}
};

int main()
{
	// 1 Создайте иерархию классов с виртуальными методами и попробуйте выполнить динамическое преобразование типов указателей.
	// Base *basePtr = new Derived();
	// Derived *derivedPtr = dynamic_cast<Derived *>(basePtr);
	// if (derivedPtr)
	// {
	// 	derivedPtr->func();
	// }
	// // 2 Создайте иерархию классов с виртуальным деструктором и проверьте, что он вызывается
	// //  при удалении производных объектов через указатель на базовый класс.
	// delete basePtr;
	// 3 Создайте классы с разным уровнем доступа к методам и попробуйте изменить доступ в производных классах.
	Derived derived;
	derived.protectedMethod();

	return 0;
}