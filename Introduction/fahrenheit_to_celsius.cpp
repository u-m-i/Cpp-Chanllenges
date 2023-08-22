/**
 * Convert temperatur in Fahrenheit to Celsius using the formula:
 * celsius = (fahrenheit - 32) * (5/9)
 */


#include <iostream>

int main()
{
	double celsius, fahrenheit;

	std::cin >> fahrenheit;

	celsius = (fahrenheit - 32) * (5.0/9.0);

	std::cout << celsius << std::endl;

	return 0;
}


