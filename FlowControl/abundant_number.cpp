/**
 * An abundant number is one on the total sum of all its divisors is major than the number itself.
 */

#include<iostream>

void refactor(int n, int &total)
{
	if(n % 2 == 0)
	{
		int half = (n/2);

		for(int i = 2; i < half + 1; ++i)
		{
			if(n % i == 0)
				total += i;
		}


	}
}



int main()
{
	int number, total = 1;

	std::cin >> number;


	refactor(number, total);


	std::cout << (number > total ? "Not an " : "") << "Abundant Number";


	return 0;
}
