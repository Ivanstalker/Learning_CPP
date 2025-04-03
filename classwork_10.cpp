#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

void checkValue(int value){
	if (value < 0) {
		throw invalid_argument("Value should be positive!");
	}
	cout << "Value is correct." << value << endl;
}

class MyException : public runtime_error{
public:
	MyException(string message) : runtime_error(message){}
};

void processValue(int value){
	if (value == 0){
		throw invalid_argument("Value can`t be 0!");
	}else if (value < 0){
		throw runtime_error("Value can`t be oposite");
	}else{
		cout << "Processing the value..." << endl;
	}
}

int main() {
	// 1.Напишите функцию, которая выбрасывает исключение, если передано некорректное значение аргумента.
	// 2.Обработайте это исключение в main с помощью try-catch.
	// try{
	// 	checkValue(-5);
	// }catch(const invalid_argument& ex){
	// 	cerr << "Error: " << ex.what() << endl;
	// }
	// 3.Создайте свой собственный тип исключения, унаследованный от std::runtime_error.
	// 4.Напишите функцию, которая может генерировать исключения разных типов в зависимости от разных условий.
	// 6.Продемонстрируйте работу вложенных блоков try-catch.
	try {
       try {
           throw runtime_error("Внутренняя ошибка!");
       } catch (const runtime_error& innerEx) {
           cerr << "Перехвачена внутренняя ошибка: " << innerEx.what() << endl;
           throw; // Проброс исключения выше
       }
   } catch (const runtime_error& outerEx) {
       cerr << "Перехвачена внешняя ошибка: " << outerEx.what() << endl;
   }
	return 0;
}