/**
 *
 */

#include<iostream>

int main()
{
	int amount, children;

	std::cin >> amount >> children;

	std::cout << (amount / children) << '\n' << (amount % children) << std::endl;

	return 0;
}
