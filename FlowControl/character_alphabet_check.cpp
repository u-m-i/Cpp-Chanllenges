/**
 * Check if the input of the user is a letter
 */

#include<iostream>

int main()
{
	char input;

	std::cin >> input;


	if(input >= 'a' && input <= 'z' || input >= 'A' && input <= 'Z')
	{
		std::cout << "Alphabet" << std::endl;
	}
	else
	{
		std::cout << "Not Alphabet" << std::endl;
	}
	
	return 0;
}

