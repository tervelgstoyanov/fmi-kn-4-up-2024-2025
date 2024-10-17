#include <iostream>

int main()
{
    /* Declaring and reading a year */
    unsigned int year;
    std::cin>>year;
    
    /* Calculating the conditions for leap year */
    bool divisibleBy4 = !(year%4);
    bool divisibleBy100 = !(year%100);
    bool divisibleBy400 = !(year%400);
    
    /* Formulating the whole leap year rules in two ways */
    std::cout<< (divisibleBy4 && (!divisibleBy100 || divisibleBy400)) <<std::endl;
    std::cout<< (divisibleBy4 && (divisibleBy100 == divisibleBy400)) << std::endl;

    return 0;
}