/**
 * Sum of digits
 */

#include<iostream>

int main()
{
	int number;

	std::cin >>  number;

	std::string digits = to_string(number);	


	int result = 0;


	// The numbers' characters are stored in ASCII code
	// (American Standard for Code Information Interchage)
	// The first one '0' is represented with 48, the next '1' 
	// takes the 49, and so on. In order to cast the char to int, 
	// we can substract the '0' from any other number.
	// Remember this is only for characters and not an array of them.

	for(int i = 0;i < (digits.length()); ++i)
	
	{
		int digit = digits[i] - '0';

		result += digit;
	    
	}

	std::cout << result;

	return 0;
}

