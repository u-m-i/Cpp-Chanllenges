/**
 * Swap the content of two variables without using a *buffer* or a third variable.
 */

int main()
{
	int number_one, number_two;

	std::cin >> number_one >> number_two;

	// Swap
	
	number_one = number_one + number_two;
	number_two = number_one - number_two;
	number_one = number_one - number_two;

	std::cout << number_one << '\n' << number_two << std::endl;

	return 0;
}


