/**
 * Maximun possible handshakes among a group of students
 */


#include<iostream>

int main()
{
	int amount;
	
	std::cin >> amount;
	
	std::cout << (amount * (amount - 1) /2) << std::endl;

	return 0;
	
}

