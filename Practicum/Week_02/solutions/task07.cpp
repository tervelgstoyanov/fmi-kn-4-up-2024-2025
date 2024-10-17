#include <iostream>
#include <cmath>

int main()
{
    /* Reading a whole number */
    int x;
    std::cin >> x;

    /* 1 for positive and -1 for negative */
    std::cout << x / std::fabs(x) << std::endl;
    /* 1 for positive and 0 for negative */
    std::cout << (x >= 0) << std::endl;

    return 0;
}