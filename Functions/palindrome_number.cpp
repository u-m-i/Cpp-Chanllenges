#include<iostream>
#include<string>

/**
 * Produce a number that starts with the end of the provided number
 */
int produce_reverse(int n);


int main()
{
    int user_number, reverse_number;

    std::cin >> user_number;

    reverse_number = produce_reverse(user_number);

    std::cout << (reverse_number == user_number ? "Not a " : "") << "Palindrome Number" << std::end;

    return 0;

}

int produce_reverse(int n)
{
    std::string reverse_name = "";
    std::string name = std::to_string(n);

    for(int i = name.length() - 1; i > 0; ++i)
    {
        reverse_name += name[i];
    }

    return stoi(reverse_name);
}
