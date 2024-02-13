// Solve The Exercises of Chapter two in (C++ How To Program)
// Exercise 2.29

#include <iostream>
// (Table)
int main() {
	int length1{0};
	int length2 = 1;
	int length3 = 2;
	int length4 = 3;
	int length5 = 4;

	
	std::cout << "Face length\tSurface area\tVolume" << std::endl;
	std::cout << length1 << "\t\t" << length1 * length1 * 6 << "\t\t" << length1 * length1 * length1 << std::endl;
	std::cout << length2 << "\t\t" << length2 * length2 * 6 << "\t\t" << length2 * length2 * length2 << std::endl;
	std::cout << length3 << "\t\t" << length3 * length3 * 6 << "\t\t" << length3 * length3 * length3 << std::endl;
	std::cout << length4 << "\t\t" << length4 * length4 * 6 << "\t\t" << length4 * length4 * length4 << std::endl;
	std::cout << length5 << "\t\t" << length5 * length5 * 6 << "\t\t" << length5 * length5 * length5 << std::endl;

}