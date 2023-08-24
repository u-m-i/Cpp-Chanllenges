/**
 * Check if a number is negative
 *
 */

#include<iostream>

int main()
{
	int number;
	cin >> number;

	if(number)
	{
		std::cout << (number > 0 ? "Positive" : "Negative") << " Number" << std::endl;
	}
	else
	{
		std::cout << "Zero Number" << std::endl;

	}

	return 0;
}
