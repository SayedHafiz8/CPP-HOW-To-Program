// Solve The Exercises of Chapter two in (C++ How To Program)
// Exercise 2.23

#include <iostream>
// (Largest and Smallest Integers)
int main() {
	int num1{ 0 }, num2{ 0 }, num3{ 0 }, num4{ 0 }, num5{ 0 };

	// Find The largest number
	std::cout << "Enter The numbers" << std::endl;
	std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

	if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5) {
		std::cout << "The largest is: " << num1 << std::endl;
	}
	if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5) {
		std::cout << "The largest is: " << num2 << std::endl;
	}
	if (num3 > num2 && num3 > num1 && num3 > num4 && num3 > num5) {
		std::cout << "The largest is: " << num3 << std::endl;
	}
	if (num4 > num2 && num4 > num3 && num4 > num1 && num4 > num5) {
		std::cout << "The largest is: " << num4 << std::endl;
	}
	if (num5 > num2 && num5 > num3 && num5 > num4 && num5 > num1) {
		std::cout << "The largest is: " << num5 << std::endl;
	}

	// Find the smallest number
	if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5) {
		std::cout << "The smallest is: " << num1 << std::endl;
	}
	if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5) {
		std::cout << "The smallest is: " << num2 << std::endl;
	}
	if (num3 < num2 && num3 < num1 && num3 < num4 && num3 < num5) {
		std::cout << "The smallest is: " << num3 << std::endl;
	}
	if (num4 < num2 && num4 < num3 && num4 < num1 && num4 < num5) {
		std::cout << "The smallest is: " << num4 << std::endl;
	}
	if (num5 < num2 && num5 < num3 && num5 < num4 && num5 < num1) {
		std::cout << "The smallest is: " << num5 << std::endl;
	}
}