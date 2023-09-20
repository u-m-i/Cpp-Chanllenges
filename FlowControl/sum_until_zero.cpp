/**
 * Sum input until the user enters zero = '0'
 */

#include<iostream>

int main()
{
	bool is_zero = false;

	int result = 0;


	while(!is_zero)
	{
		int number;

		std::cin >> number;

		result += number;

		is_zero = number == 0;

	}

	std::cout << result << std::endl;

	return 0;
}
