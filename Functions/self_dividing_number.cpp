/**
 * Proof that a number is divisible by all its digits
 */

#include<iostream>

/**
 * Check if a number is by every of its digitis
 * @param {int} n target number
 * @returns {bool} is it a self-dividing number?
 */
bool is_self_dividing(int n);



int main()
{
	int user_number;

	std::cin >> user_number;

	std::cout << (is_self_dividing(user_number) ? "" : "Not a ") << "Self Dividing Number" << std::endl;

	return 0;
}



bool is_self_dividing(int n)
{
	std::string name = std::to_string(n);

	for(int i = 0; i < name.length(); ++i)
	{
		if(n % (name[i] - '0') != 0)
			return false;
	}

	return true;
}
	
