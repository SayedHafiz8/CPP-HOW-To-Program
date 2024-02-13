// Solve The Exercises of Chapter two in (C++ How To Program)
// Exercise 2.24

#include <iostream>
// (Odd or Even)
int main() {
	int num1{ 0 }, num2{ 0 }, num3{0};

	std::cout << "Enter The two numbers" << std::endl;
	std::cin >> num1 >> num2 >> num3;

	
	// Check if the sum is odd or not ? 
	if (num3 % num1 == 0 && num3 % num2 == 0) {
		std::cout << "The first two numbers are factors of the third " << std::endl;
	}
}