#pragma once
#include <string>
#include <iostream>

class MotorVehicle {
public:
	MotorVehicle(std::string vehicleMake, std::string vehicleFuel, int vehicleYearsOfManu)
		:vehUsingMake{ vehicleMake }, fuelType{ vehicleFuel }, yearOfManufactor{ vehicleYearsOfManu } {

	}

	void setVehicleMake(std::string vehicleUsing) {
		vehUsingMake = vehicleUsing;
	}

	std::string getvehicleMake() {
		return vehUsingMake;
	}

	void setFuelType(std::string vehivleFuel) {
		fuelType = vehivleFuel;
	}

	std::string getVehicleFuel() {
		return fuelType;
	}

	void setYearsOfManu(int years) {
		yearOfManufactor = years;
	}

	int getYearsOfManu() {
		return yearOfManufactor;
	}

	void setColor(std::string vehivleColor) {
		color = vehivleColor;
	}

	std::string getColor() {
		return color;
	}

	void setEngineCapacity(int vehicleEnginCap) {
		engineCapacity = vehicleEnginCap;
	}

	int getEnginCapacity() {
		return engineCapacity;
	}

	void displayCarDetails() {
		std::cout << "Vehicle Name is: " << getvehicleMake() << std::endl;
		std::cout << getvehicleMake() << " Fuel type is: " << getVehicleFuel() << std::endl;
		std::cout << getvehicleMake() << " years of manufactor are: " << getYearsOfManu() << std::endl;
		std::cout << getvehicleMake() << " color is: " << getColor() << std::endl;
		std::cout << getvehicleMake() << " Engine capacity is: " << getEnginCapacity() << " cc" << std::endl;
	}
private:
	std::string vehUsingMake;
	std::string fuelType;
	int yearOfManufactor{ 0 };
	std::string color;
	int engineCapacity{ 0 };
};