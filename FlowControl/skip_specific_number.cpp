/**
 * Skips a specific number on a for loop that goes until the 5 (inclusive)
 */

#include<iostream>
#define LIMIT 6

int main()
{
	int number;

	std::cin >> number;


	for(int i = 0; i < LIMIT; ++i)
	{
		if(i == number)
			continue;

		std::cout << i << '\n';
	}

	return 0;
}
