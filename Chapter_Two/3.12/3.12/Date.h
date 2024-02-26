#pragma once
#include <iostream>

class Date {
public:
	Date(int monthDate, int dayDate, int yearDate)
		:day{ dayDate }, month{ monthDate }, year{ yearDate } {

	}

	void setDay(int dayDate) {
		day = dayDate;
	}

	int getDay() {
		return day;
	}

	void setMonth(int monthDate) {
		if (monthDate >= 1 && monthDate <= 12) {
			month = monthDate;
		}
		else {
			month = 1;
		}
	}

	int getMonth() {
		return month;
	}

	void setYear(int yearDate) {
		year = yearDate;
	}

	int getYear() {
		return year;
	}

	void displayDate() {
		std::cout << "Your Date is: " << getMonth() << " / " << getDay() << " / " << getYear() << "   ( month / day / year )" << std::endl;
	}


private:
	int day{0}, month{ 0 }, year{ 0 };
};