/**
 * Leap year check 
 */

#include<iostream>

int main()
{
	int user_year;

	std::cin >> user_year;

	if((user_year % 4 == 0 && user_year % 100 != 0) || user_year % 400 == 0)
	{
		std::cout << "Leap Year" << std::endl;
		return 0;
	}

	std::cout << "Not a Leap Year" << std::endl;


	return 0;
}



