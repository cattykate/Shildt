#include <iostream>

class Vehicle {
public:
	int passengers; // number of passengers
	int fuelcap; // fuel capacity
	int mpg; // fuel consumption

	int range();
};

int Vehicle::range() {
	return mpg*fuelcap;
}

int main() {
	Vehicle minivan;
	Vehicle cabriolet;

	int range = 0;
	int range1 = 0; //distance of mileage
	int range2 = 0;
	

	minivan.passengers = 7;
	minivan.fuelcap = 16;
	minivan.mpg = 21;

	cabriolet.passengers = 3;
	cabriolet.fuelcap = 14;
	cabriolet.mpg = 12;

	range1 = minivan.fuelcap*minivan.mpg;
	range2 = cabriolet.fuelcap*cabriolet.mpg;

	range = minivan.range();
	
	return 0;
}