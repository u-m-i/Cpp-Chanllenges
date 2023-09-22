/**
 * Check if a number is a Harshad number
 */

#include<iostream>


int main()
{
	int number, total;

	std::string name;

	std::cin >> number;


	name = to_string(number);


	for(int i = 0 ; i < name.length(); ++i)
	{
		total += (name[i] - '0');
	}


	std::cout << (number % total == 0 ? "Harshad Number" : "Not a Harshad Number") << std::endl;

	return 0;

}
