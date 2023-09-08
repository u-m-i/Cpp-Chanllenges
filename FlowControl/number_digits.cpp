/**
 * Count the digits of the number
 */

#include<iostream>


int main()
{
	int number;

	std::cin >> number;

	std::string characters = to_string(number);

	std::cout << characters.length();

	return 0;
}
