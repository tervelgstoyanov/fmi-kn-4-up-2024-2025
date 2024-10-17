#include <iostream>

int main()
{
    /* Declarating and reading a char */
    char letter;
    std::cin >> letter;

    /* Applying the formula for the order in the alphabet */
    std::cout << letter - 'A' + 1 << std::endl;

    return 0;
}