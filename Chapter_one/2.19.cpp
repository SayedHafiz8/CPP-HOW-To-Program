// Solve The Exercises of Chapter two in (C++ How To Program)
// Exercise 2.19

#include <iostream>
// (Arithmetic, Smallest and Largest)
int main() {
	int num1{ 0 }, num2{ 0 }, num3{ 0 };
	std::cout << "Enter Tha Three numbers" << std::endl;
	std::cin >> num1 >> num2 >> num3;

	std::cout << "Sum is " << num1 + num2 + num3 << std::endl;
	std::cout << "Avarage is " << (num1 + num2 + num3) / 2 << std::endl;
	std::cout << "Product is " << num1 * num2 * num3 << std::endl;

	if (num1 > num2 && num1 > num3) {
		std::cout << "The largest is " << num1 << std::endl;
	}
	if (num2 > num1 && num2 > num3) {
		std::cout << "The Largest is " << num2 << std::endl;
	}
	if (num3 > num1 && num3 > num2) {
		std::cout << "The Largest is " << num3 << std::endl;
	}

	if (num1 <  num2 && num1 < num3) {
		std::cout << "The Smallest is " << num1 << std::endl;
	}
	if (num2 < num1 && num2 < num3) {
		std::cout << "The Smallest is " << num2 << std::endl;
	}
	if (num3 < num1 && num3 < num2) {
		std::cout << "The Smallest is " << num3 << std::endl;
	}
}