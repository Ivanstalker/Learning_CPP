#include <iostream>
#include "my_header.h"

int main(){
	// int sum = add(5, 3);
	// std::cout << "5 + 3 = "  << sum << std::endl;
	// std::cout << "PI = " << PI << std::endl;

	global_counter++;
	std::cout << "Global counter: " << global_counter << std::endl;
	
	return 0;
}