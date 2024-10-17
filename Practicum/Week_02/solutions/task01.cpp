#include <iostream>

int main()
{
    /* Hours are a natural number */
    unsigned int hours;
    std::cin>>hours;

    /* Calculating the full turns of the little arrow */
    int turns = hours / 12;
    /* Finding the final position on the clock */
    int finalHours = hours % 12;
    /* Smart transformation to translate 0 to 12 */
    finalHours = (finalHours + 11) % 12 + 1;

    std::cout<< turns << ' ' << finalHours <<std::endl;

    return 0;
}