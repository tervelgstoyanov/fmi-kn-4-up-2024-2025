#include <iostream>

unsigned int nthFibNumber(const unsigned int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned int prev = 0, curr = 1;

    for (unsigned int i = 2; i <= n; ++i)
    {
        unsigned int temp = prev + curr;
        prev = curr;
        curr = temp;
    }

    return curr;
}

int main()
{
    unsigned int n;
    std::cin >> n;

    std::cout << nthFibNumber(n) << std::endl;

    return 0;
}