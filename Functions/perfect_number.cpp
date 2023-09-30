/**
 * Perfect number indicator
 */

#include<iostream>

#define LOWEST_PRIME 2


bool is_perfect(int n);


int main()
{
	int user_number;

	std::cin >> user_number;


	std::cout << (!is_perfect(user_number) ? "Not a" : "") << " Perfect Number" << std::endl; 


	return 0;
}


bool is_perfect(int n)
{
	int total = 1;


	for(int i = LOWEST_PRIME; i < n; ++i)
	{
		if(n % i == 0)
			total += i;
	}

	return (total == n);
}


