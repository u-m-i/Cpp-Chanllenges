/**
 * Calculate the addional bonus in the case the employee 
 * has 5 years of service
 */

#include<iostream>


int main()
{
	double salary, years, result;


	std::cin >> salaray >> years;


	result = salary * 0.05;


	if(years <= 5)
		result = 0.0;



	std::cout << result << std::endl;

	return 0;

}
