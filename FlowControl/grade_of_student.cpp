/**
 *  Determine the grade of a student's work
 */

#include<iostream>


int clamp(int number, int min, int max)
{
	return number <= min ? min : number >= max ? max : number;
}



int main()
{
	int grade, result;

	std::cin >> grade;

	// Let's use the Ascii code for the grade results
	// Ascii code for:
	// A: 65 ; 140 - 90 = 50 / 10 + 60 
	// B: 66 ; 140 - 80 = 60 / 10 + 60
	// C: 67 ; 140 - 70 = 70 / 10 + 60
	// D: 68 ; 140 - 60 = 80 / 10 + 60


	if(grade >= 70)
	{
		// Clamp it, as it is easier to calculate the result

		int substancial = clamp(grade, 60, 90);

		// Extract the tenth multiple of the number, example
		// if 85 then thent = 80
		int tenth = (substancial/10)*10;


		// Finally calculate the ascii position
		result = ((140 - tenth)/10) + 60; 	


	}
	else
	{
		result = 68;
	}


	
	std::cout << char(result) <<  std::endl;

	return 0;

}

