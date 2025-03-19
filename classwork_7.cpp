#include <iostream>

using namespace std;

class Shape final {
public:
	string color;

	Shape(string c) : color(c){
		cout << "constructor 'Shape' " << endl;
	} 

	~Shape() {
		cout << "destructor 'Shape' " << endl;
	}
};

class Base{
public: 
	int  publicValue = 12;
private:
	int privateValue = 13;
protected:
	int protectedValue = 52;

};

class Derived : public Base{
public: 
	void printInfo(){
		cout << "Public: " << publicValue << endl;
		//cout << "Private: " << privateValue << endl; // error 404
		cout << "Protected: " << protectedValue << endl;
	}
};

// class Rectangle : public Shape{
// public:
// 	int width;
// 	int height;

// 	Rectangle(int w, int h) : width(w), height(h) {
// 		cout << "constructor 'Rectangle' " << endl; //error 404
// 	}

// 	~Rectangle() {
// 		cout << "destructor 'Rectangle' " << endl;
// 	}
// };

class Bace {
public:
   int publicValue = 10;
protected:
   int protectedValue = 20;
};

class Deriv : protected Bace {
public:
   using Bace::publicValue; // Устанавливаем публичный доступ к publicValue
};

int main() {
	//1 Создайте класс Shape с атрибутом color.
	//2 Создайте производный класс Rectangle от класса Shape с атрибутами width и height.
	//3 Добавьте конструкторы и деструкторы в базовый и производный классы.
	//4 Попробуйте запретить наследование класса.
	//5 Создайте базовый класс с модификаторами доступа public, private и protected и проверьте доступ к этим членам в производном классе с разными типами наследования.
	//6 Создайте базовый класс и производный, с разными модификаторами доступа и установите публичный доступ через using.
	Derived derived;
   cout << "publicValue = " << derived.publicValue << endl; // Доступно
   // cout << "protectedValue = " << derived.protectedValue << endl; // Ошибка: недоступно
	return 0;
}