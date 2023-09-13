/**
 * Stop at a 5 
 */

#include<iostream>

int main()
{

	for(int i = 0; i < 9; ++i)
	{
		if(i == 5)
			break;

		std::cout << i << '\n';
	}

	return 0;
}
	
