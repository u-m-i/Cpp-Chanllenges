/**
 * First check if a number is a prime
 */


#include<iostream>


#define LOWEST_PRIME 2


int phi(int n);



int main()
{

	int start_point, end_point;

	std::cin >> start_point >> end_point;


	start_point = (start_point < LOWEST_PRIME ? LOWEST_PRIME : start_point);


	for(int i = start_point; i < (end_point + 1); ++i)
	{

		if(phi(i) == (i - 1))
			
			std::cout << i << '\n';	
	}

	return 0;
}


int phi(int n)
{

	int totient = n;

	for(int i = 2 ; i*i <= n; ++i)
	{

		if(n % i == 0)
		{
			
			totient -= (totient / i);

			while(n % i == 0)
			{
				n /= i;
			}

		}
	}

	totient -= (totient / n);

	return totient;

}
