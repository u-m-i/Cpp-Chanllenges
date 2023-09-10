/**
 * Sum of digits
 */

#include<iostream>

int main()
{
	int number;

	std::cin >>  number;

	int digits = to_string(number).length();	


	int result = 0;


	for(int i = 1;i < (digits - 1);++i)
	
	{
		result += (number % (10 * i));	

		if(i == (digits - 1))
		{
			result += (number / (10 * i));
		}
	    
	}

	std::cout << result;

	return 0;
}

