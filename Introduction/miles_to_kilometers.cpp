#include<iostream>

int main()
{
	double kilometers, miles;

	std::cin >> miles;

	// Convertion
	kilometers  = miles * 1.609344;
	
	std::cout << kilometers << endl;

	return 0;
}	
