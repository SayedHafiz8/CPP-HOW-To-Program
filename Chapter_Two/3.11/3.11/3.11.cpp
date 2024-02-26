#include <iostream>
#include "Vehicle.h"

using namespace std;

int main()
{
	MotorVehicle car{ "Mercedes Benz", "premium unleaded gas", 1926 };
	car.setColor("Black");
	car.setEngineCapacity(1993);
	car.displayCarDetails();
}