// Solve The Exercises of Chapter two in (C++ How To Program)
// Exercise 2.20

#include <iostream>
// (Diameter, Circumference and Area of a Circle)
int main() {
	int radius{ 0 };
	int n = 3.1459;

	std::cout << "Eneter The value of radius: ";
	std::cin >> radius;

	std::cout << "The diameter equal " << radius * 2 << std::endl;
	std::cout << "The circumference equal " << radius * 2 * n << std::endl;
	std::cout << "The area equal " << radius * radius * n << std::endl;

}