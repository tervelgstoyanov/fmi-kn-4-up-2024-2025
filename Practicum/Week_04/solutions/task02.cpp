#include <iostream>

int main()
{
    unsigned int n, a;
    unsigned int sum = 0, prod = 1;

    std::cin >> n;

    for (unsigned int i = 1; i <= n; ++i)
    {
        std::cin >> a;
        
        sum += a;
        prod *= a;
    }

    std::cout
        << "The sum of the numbers is " << sum << ".\n"
        << "The product of the numbers  is " << prod << ".\n";
        
    return 0;
}