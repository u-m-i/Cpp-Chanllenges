/**
 * Check if a number is prime
 */

#include<iostream>


int main()
{
	int number, factor_count = 0;

	std::cin >> number;


	for(int i = 1; i < number + 1; ++i)
	{

		if(number % i == 0)
		{
			factor_count++;
		}

	}


	std::cout << (factor_count <= 2 ? "Prime" : "Not Prime");


	return 0;
}

