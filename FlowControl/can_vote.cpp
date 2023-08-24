/**
 * Verify if a person can vote or not.
 * @remarks For this exercise is very important to write vote with capital v.
 */

#include<iostream>

int main()
{
	int age;

	std::cin >> age;

	if(age >= 18)
	{
		std::cout << "Can Vote" << std::endl;
		return 0;
	}

	std::cout << "Cannot Vote" << std::endl;

	return 0;

}
