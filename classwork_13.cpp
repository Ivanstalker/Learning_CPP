#include <iostream>
#include <array>
#include <string>

using namespace std;

int main() {
    // 1 Создайте std::array из 7 элементов типа std::string. Инициализируйте его днями недели. Выведите каждый день недели на отдельной строке.
    std::array<std::string, 7> daysOfWeek = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    for (const auto& day : daysOfWeek) {
        std::cout << day << std::endl;
    }
    // 2 Создайте std::array из 10 элементов типа int. Заполните его значением 42, используя функцию fill. Выведите содержимое массива.
    std::array<int, 10> numbers;
    std::fill(numbers.begin(), numbers.end(), 42);
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    // 3 Создайте два std::array из 5 элементов типа int. Заполните их разными значениями. Сравните массивы и выведите, равны ли они. Если нет, выведите, какой из массивов больше.
    std::array<int, 5> array1 = {1, 2, 3, 4, 5};
    std::array<int, 5> array2 = {1, 2, 3, 4, 6};   
    std::cout << std::endl; 
    // 4 Создайте std::array<int, 10> и заполните его случайными числами. Найдите минимальный и максимальный элементы в массиве.
    std::array<int, 10> randomNumbers = {3, 5, 1, 8, 2, 7, 4, 6, 9, 0};
    int minElement = randomNumbers[0];
    int maxElement = randomNumbers[0];
    for (const auto& number : randomNumbers) {
        if (number < minElement) {
            minElement = number;
        }
        if (number > maxElement) {
            maxElement = number;
        }
    }
    std::cout << "Min element: " << minElement << std::endl;
    std::cout << "Max element: " << maxElement << std::endl;
    // 5 Создайте std::array<int, 5> и инициализируйте его любыми значениями. Переставьте элементы массива в обратном порядке.
    std::array<int, 5> reverseArray = {1, 2, 3, 4, 5};
    std::reverse(reverseArray.begin(), reverseArray.end());
    std::cout << "Reversed array: ";
    for (const auto& number : reverseArray) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
    
}