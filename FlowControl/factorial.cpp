/** 
 * Calculate the factorial of N
 */

#include<iostream>

int recursive(int n)
{
	if(n < 2)
		return 1;

	return recursive(n - 1) * n;
}



int main()
{
	int n;
	std::cin >> n;


	std::cout << recursive(n) << std::endl;

	return 0;
}


