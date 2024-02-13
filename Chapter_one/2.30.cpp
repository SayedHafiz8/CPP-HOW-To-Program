// Solve The Exercises of Chapter two in (C++ How To Program)
// Exercise 2.30

#include <iostream>
// (Body Mass Index Calculator)
int main() {
	double weight{ 0 }, height{ 0 };

	std::cout << "Enter Your weight: ";
	std::cin >> weight;
	std::cout << "\nEnter Your height: ";
	std::cin >> height;

	std::cout << "Your BMI is: " << weight / (height * height) << std::endl;

	std::cout << "BMI VALUES" << std::endl;
	std::cout << "Underweight: less than 18.5" << std::endl;
	std::cout << "Normal: between 18.5 and 24.9" << std::endl;
	std::cout << "Overweight: between 25 and 29.9" << std::endl;
	std::cout << "Obese: 30 or greater" << std::endl;
}