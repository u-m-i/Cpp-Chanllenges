/**
 * Print the _n_ numbers
 */

#include<iostream>

int main()
{
	int user_number;

	std::cin >> user_number;

	for(int i = 1 ; i < user_number + 1 ; ++i)
	{

		std::cout << i << '\n';

	}

	return 0; 
}

