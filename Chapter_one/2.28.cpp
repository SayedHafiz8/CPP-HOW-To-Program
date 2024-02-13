// Solve The Exercises of Chapter two in (C++ How To Program)
// Exercise 2.28

#include <iostream>
// (Digits of an Integer)
int main() {
	int num{ 0 }, step1{ 0 }, step2{ 0 }, step3{0};

	std::cout << "Enter The charecter" << std::endl;
	std::cin >> num;

	step1 = num / 10;
	step2 = step1 / 10;
	step3 = step2 / 10;

	std::cout << num % 10 << "  " << step1 % 10 << "  " << step2 % 10 << "  " << step3 % 10 << std::endl;
	

}