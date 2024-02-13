// Solve The Exercises of Chapter two in (C++ How To Program)
// Exercise 2.18

#include <iostream>
// (Comparing Integers)
int main() {
	int num1{ 0 }, num2{ 0 };
	std::cout << "Enter The two numbers" << std::endl;
	std::cin >> num1 >> num2;

	if (num1 > num2) {
		std::cout << "The large is: " << num1 << std::endl;
	}
	if (num1 < num2) {
		std::cout << "The large is: " << num2 << std::endl;
	}
	if (num1 == num2) {
		std::cout << "These numbers are equal" << std::endl;
	}
}