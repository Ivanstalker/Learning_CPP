#include <iostream>
#include <functional>

int add(int a, int b)
{
	return a + b;
}

int substract(int a, int b)
{
	return a - b;
}

std::function<int(int, int)> getOperation(char op)
{
	if (op == '+')
		return add;
	else if (op == '-')
		return substract;

	return nullptr;
}

int main()
{
	auto operation = getOperation('+');
	if (operation != nullptr)
		std::cout << "Result: " << operation(10, 5) << std::endl;
	operation = getOperation('-');
	if (operation != nullptr)
		std::cout << "Result: " << operation(10, 5) << std::endl;
	operation = getOperation('*');
	if (operation == nullptr)
		std::cout << "Eror 404" << std::endl;

	return 0;
}