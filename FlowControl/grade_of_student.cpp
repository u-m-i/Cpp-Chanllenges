/**
 *  Determine the grade of a student's work
 */

#include<iostream>
#include<cmath>

int main()
{
	int grade, result;
	std::cin >> grade;

	// Ascii code for:
	// A: 14
	// B: 24
	// C: 34
	// D: 54


	// Result is the subtrahend of the grade to 100	
	result = 100 - grade;

	if(result <= 30)
	{
		float tenth_part = (result/10.0);


		double subtrahend = std::fmod(result/10.0, double(result/10)) * 10.0;


		std::cout << subtrahend;	


		result = (result - subtrahend) + (4);
	}
	else
	{
		result = 54;
	}


	
	std::cout << char(result) <<  std::endl;

	return 0;

}
