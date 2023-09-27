/**
 * Check in a sequence the armstrong numbers
 */

#include<iostream>


bool is_armstrong(int n)
{

	int total = 0;
	std::string name = std::to_string(n);

	for(int i = 0; i < name.length(); ++i)
	{
		int number = name[i] - '0';

		total += (number * number * number);

	}

	return (total == n);
}


int main()
{
	int start_point, end_point;

	std::cin >> start_point >> end_point;

	start_point = (start_point < 153 ? 153 : start_point);


	for(int i = start_point; i < (end_point + 1); ++i)
	{
		if(is_armstrong(i))
			std::cout << i << '\n';
	}

	return 0;
}	


