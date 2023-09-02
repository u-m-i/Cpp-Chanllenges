/**
 * Program to guess the hidden number
 */

#include <iostream>

int main()
{
	int target, user_number;

	target = 18;

	std::cin >> user_number;

	if(user_number !=  target)
	{
		std::cout << "Wrong, your guess is ";

		std::cout << (user_number > target ? "larger" : "smaller") << std::endl;

		return 0;
	}


	std::cout << "Your guess is correct" << std::endl;

	return 0;

}


