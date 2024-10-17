#include <iostream>

int main()
{
    /* Declating and reading the numbers */
    int a, b, c;
    std::cin >> a >> b >> c;

    /* Write the different permutations of the numbers and observe them */
    std::cout << ((b - a) * (c - b) > 0) << std::endl;

    return 0;
}