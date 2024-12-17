#include <iostream>

unsigned int doubleFact(const unsigned int n)
{
    if (n == 0) return 1;

    unsigned int result = 1;

    for (int i = n; i > 0; i-=2)
        result *= i;

    return result;
}

int main()
{
    unsigned int n;
    std::cin >> n;

    std::cout << doubleFact(n) << std::endl;
    return 0;
}