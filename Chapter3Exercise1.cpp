// Write a program that calculates a car’s gas mileage.
// The program should ask the user to enter the number of gallons of gas the car can hold and the number of miles it can be driven on a full tank.
// It should then calculate and display the number of miles per gallon the car gets.

#include <iostream>
#include <iomanip>

int main() {

	double gallons, miles, mpg;

	// Ask the user for input
	std::cout << "Enter the number of gallons of gas the car can hold: ";
	std::cin >> gallons;

	std::cout << "Enter the number of miles the car can be driven on a full tank: ";
	std::cin >> miles;

	// Calculate miles per gallon
	mpg = miles / gallons;

	// Display the result
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "The car gets " << mpg << " miles per gallon." << std::endl;
	return 0;
}