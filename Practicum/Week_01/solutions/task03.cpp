#include <iostream>
/* A library for math operations */
#include <cmath>

int main()
{
    /* Declaration of variable */
    double a;

    /* Reading the variables from the standard input */
    std::cin >> a;

    /* Declaration and initialization of new variables */
    double perimeter = 4 * a,
        area = a * a,
        diagonal = a * std::sqrt(2);

    /* Printing the variables */
    std::cout
        << "Perimeter: " << perimeter << '\n'
        << "Area: " << area << '\n'
        << "Diagonal: " << diagonal << std::endl;

    return 0;
}
