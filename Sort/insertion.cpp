
#include<iostream>
#include<cmath>

int[] pseudo_random_array(int size);

int[] sort(int[] array);

int main()
{
   int user_size;

   std::cin >> user_size;

   int[] target = pseudo_random_array(user_size);

   int[] result = sort( target );

   for(short i = 0; i < user_size; ++i)
   {
      std::cout << result[i] + " ";
   }

   std::cout << std::endl;
}



int[] sort(int[] array)
{
   int i = 0; // Lower index;

   int length = sizeof(array) / sizeof(int);

   while( i <= j)
   {

   }
}