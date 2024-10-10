#include <iostream>

int main()
{
    /* Declaration of variables */
    int a, b;

    /* Reading the variables from the standard input */
    std::cin >> a >> b;

    /* I would not always right it like that always
       but I will show it in order You to see that it is possible :) */
    std::cout
        << "Sum: " << a + b << '\n'
        << "Difference: " << a - b << '\n'
        << "Product: " << a * b << '\n'
        << "Division: " << a / b << '\n'
        << "Remainder: " << a % b << std::endl;

    return 0;
}