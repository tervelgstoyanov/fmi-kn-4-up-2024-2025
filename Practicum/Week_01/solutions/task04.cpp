#include <iostream>

int main()
{
    /* Declaration of variables */
    int a, b;

    /* Reading the variables from the standard input */
    std::cin >> a >> b;

    /* First way */
    int temp = a;
    a = b;
    b = temp;

    /* Second way using the properties of =*/
    a = a + b;
    b = a - b;
    a = a - b;

    /* Printing the swapped values */
    std::cout << a << ' ' << b << std::endl;

    /* Why on the standard output are printed
       a and b with their original values? */

    return 0;
}