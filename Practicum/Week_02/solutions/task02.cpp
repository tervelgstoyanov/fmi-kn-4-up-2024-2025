#include <iostream>

int main()
{
    /* Declaration and reading of a 4-digit natural number */
    unsigned int x;
    std::cin >> x;

    /* Extracting the digits */
    unsigned int a = x / 1000,
                 b = (x / 100) % 10,
                 c = (x / 10) % 10,
                 d = x % 10;
    /* Calculating the sum of the squares of the digits */
    unsigned int sum = a * a + b * b + c * c + d * d;
    /* Reversing the number */
    unsigned int reversedNumber = d*1000 + c * 100 + b*10 + a;
 
    /* Printing the wanted output */
    std::cout << sum << ' ' << reversedNumber << std::endl;
    /* Bad way of reversing the number */
    // std::cout<<d<<c<<b<<a<<std::endl;

    return 0;   
}