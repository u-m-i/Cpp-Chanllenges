/**
 * Check if the input of the user is an Armstrong number
 */

#include<iostream>


int main()
{
	int number, plate = 0;

	std::string name, result = "";
	


	std::cin >> number;


	name = to_string(number);


	for(int i = 0; i < name.length(); i++)
	{
		int n = name[i] - '0';

		int cubic = n*n*n;

		plate += cubic;


	}

	result = to_string(plate);

	
	std::cout << (result == name ? "Armstrong" : "Not Armstrong") << std::endl;


	return 0;
}

		
		
