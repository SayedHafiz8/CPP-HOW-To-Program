// Solve The Exercises of Chapter two in (C++ How To Program)
// Exercise 2.27

#include <iostream>
// (Integer Equivalent of a Character)
int main() {
	char x;

	std::cout << "Enter The charecter" << std::endl;
	std::cin >> x;

	std::cout << static_cast<int>(x) << std::endl;
}