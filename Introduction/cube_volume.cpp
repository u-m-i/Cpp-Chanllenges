/**
 * Create a program to calculate the volumen of a cube.
 *  The formula for the volume of a cube : volume = length * length * length
 *  Taking into consideration that all axis sizes the same.
 */

#include<iostream>

int main()
{
	int volume, breadth;

	std::cin >> breadth;

	volume = breadth * breadth * breadth;

	std::cout << volume << std::endl;

	return 0;
}
