
#include <iostream>

int main()
{
	double number_1, number_2, number_3;

	std::cin >> number_1 >> number_2 >> number_3;
         
        double average = (number_1 + number_2 + number_3) / 3.0;
               
        std::cout << average << std::endl;

        return 0;
}
