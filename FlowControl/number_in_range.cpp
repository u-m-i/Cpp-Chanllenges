/**
 * Check if a number is in range of a second one
 */

#include<iostream>

int main()
{
	int number, range;


	std::cin >> number >> range;

	std::cout << ((range - number) < 0 ? "Out of Range" : "Within Range") << std::endl;


	return 0;
}

