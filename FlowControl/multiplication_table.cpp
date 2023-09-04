/**
 * Multiplication table for a number from I to zero;
 */


#include<iostream>


int main()
{
	int user_number;

	std::cin >> user_number;

	for(int i = 1; i < 6; i++)
		std::cout << user_number * i << '\n';

	return 0;
}

