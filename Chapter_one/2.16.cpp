// Solve The Exercises of Chapter two in (C++ How To Program)
// Exercise 2.16

#include <iostream>
// This program calculate the sum, product, difference, qoutient of two numbers
int main() {
	int number1{ 0 }, number2{ 0 };
	std::cout << "Enter the two number" << std::endl;
	std::cin >> number1 >> number2;
	
	std::cout << "The sum is: " << number1 + number2 << std::endl;
	std::cout << "The product is: " << number1 * number2 << std::endl;

	if (number1 > number2) {
		std::cout << "The differnce is: " << number1 - number2 << std::endl;
		std::cout << "The qoutient is: " << number1 / number2 << std::endl;
	}
	else {
		std::cout << "The differnce is: " << number2 - number1 << std::endl;
		std::cout << "The qoutient is: " << number2 / number1 << std::endl;
	}
	return 0;
}