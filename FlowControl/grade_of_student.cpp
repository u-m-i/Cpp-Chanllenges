/**
 *  Determine the grade of a student's work
 */

#include<iostream>
#include<algorithm>
#include<string>

int calculate_diff(int grade)
{
	int total = std::clamp(grade, 60, 90);


	return total;
	
}



int main()
{
	int grade, result;
	std::cin >> grade;

	// Ascii code for:
	// A: 65 ; 140 - 90 = 50 / 10 + 60 
	// B: 66 ; 140 - 80 = 60 / 10 + 60
	// C: 67 ; 140 - 70 = 70 / 10 + 60
	// D: 68 ; 140 - 60 = 80 / 10 + 60


	// Result is the subtrahend of the grade to 100	
	result = 140 - grade;

	if(result <= 70)
	{
		int substancial = std::clamp(grade, 60, 90);

		int difference = 140 - substancial;


		std::cout << difference  << '\n';


		result = (difference / 10) + 60;

	}
	else
	{
		result = 68;
	}


	
	std::cout << char(result) <<  std::endl;

	return 0;

}

