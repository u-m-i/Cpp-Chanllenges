/**
 * A simple calculator with two hardcoded values and a switch
 */


#include<iostream>


#define ERROR_MESSAGE "Error!"



int main()
{
	double number_1 = 69.7;
	double number_2 = 36.2436;

	double total = 0;

	char operation;

	std::cin >> operation;


	switch(operation)
	{
		case '+':
			total = number_1 + number_2;
			break;

		case '-':
			total = number_1 - number_2;
			break;

		case '*':
			total = number_1 * number_2;
			break;

		case '/':
			total = number_1 / number_2;
			break;

		default:
			std::cout << ERROR_MESSAGE << std::endl;
			
			return 0;
	}


	std::cout << total << std::endl;

	return 0;

}
