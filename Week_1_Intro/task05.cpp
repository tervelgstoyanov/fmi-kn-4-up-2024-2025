#include <iostream>
/* A library for math operations */
#include <cmath>

int main()
{
    /* Declaration of variables */
    double a, b;

    /* Reading the variables from the standard input */
    std::cin >> a >> b;

    /* Calculating the bigger one */
    double bigger = (a + b + std::fabs(a - b)) / 2;

    /* Printing the bigger one */
    std::cout << bigger << std::endl;

    return 0;
}