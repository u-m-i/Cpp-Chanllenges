/**
 * Classic Fizz Buzz
 */

#include<iostream>

#define FIZZ "Fizz"
#define BUZZ "Buzz"

int main()
{
	int number;

	std::cin >> number;

	std::string result = to_string(number);


	if(number % 3 == 0)
	{
		result = "";

		std::cout << FIZZ;
	}
	

	if(number % 5 == 0)
	{

		result = "";

		std::cout << BUZZ;
	}
	

	std::cout << result << std::endl;

	return 0;

}
