#include <iostream>
#include <cstring> // Для работы с C-строками

using namespace std;

class MyString {
private:
    char* str;

public:
    // Конструктор с параметром
    MyString(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Конструктор копирования
    MyString(const MyString& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    // Деструктор
    ~MyString() {
        delete[] str;
    }

    // Метод для вывода строки
    void print() const {
        cout << str << endl;
    }
};

int main() {
    MyString s1("Hello");
    MyString s2 = s1; // Вызов конструктора копирования

    s1.print(); // Вывод: Hello
    s2.print(); // Вывод: Hello

    return 0;
}



