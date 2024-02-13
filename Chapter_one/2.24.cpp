// Solve The Exercises of Chapter two in (C++ How To Program)
// Exercise 2.24

#include <iostream>
// (Odd or Even)
int main() {
	int num1{ 0 }, num2{ 0 }, sum{0};

	std::cout << "Enter The two numbers" << std::endl;
	std::cin >> num1 >> num2;

	sum = num1 + num2;
	// Check if the sum is odd or not ? 
	if (sum % 2 != 0) {
		std::cout << "The sum is: " << sum << std::endl;
	}
}