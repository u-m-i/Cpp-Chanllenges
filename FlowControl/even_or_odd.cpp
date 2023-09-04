/**
 * Even or odd (classic old one)
 */

#include<iostream>

int main()
{
	int user_number;

	std::cin >> user_number;

	std::cout << (user_number % 2 == 0 ? "even" : "odd");

	return 0;
}


