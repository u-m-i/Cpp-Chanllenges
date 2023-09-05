#include<iostream>
#include<string>



int main()
{
	int jack_age, roman_age, johnny_age;

	std::string biggest_brother;

	std::cin >> jack_age >> roman_age >> johnny_age;

	if(jack_age > roman_age && jack_age > johnny_age)
	{
		biggest_brother = "Jack";
	}

	if(roman_age < johnny_age && roman_age < jack_age)
	{
		biggest_brother = "Roman";
	}

	if(johnny_age < roman_age && johnny_age < jack_age)
	{
		biggest_brother = "Johnny";
	}


	std::cout << biggest_brother << std::endl;

	return 0;
}
