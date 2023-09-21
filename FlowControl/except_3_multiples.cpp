/**
 * Only show on a for loop of ten iterations the non-multiples of three.
 */


#include<iostream>


int main()
{
	for(int i = 1; i < 11; ++i)
	{
		if(i % 3 == 0)
			continue;

		std::cout << i << '\n';

	}

	return 0;
}
