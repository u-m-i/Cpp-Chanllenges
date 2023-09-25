/**
 * Print half a triangle over the terminal.
 */


#include<iostream>

int main()
{
	int size;
	std::string column = "* ";

	std::cin >> size;


	for(int i = 0 ; i < (size); i++)
	{
		std::cout << column << '\n';
		column = column + "* ";
	}

	return 0;
}
