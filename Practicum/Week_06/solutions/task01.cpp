#include <iostream>

int nextInteger(const int n)
{
    return n + 1;
}

int main()
{
    int n;
    std::cin >> n;

    std::cout << nextInteger(n) << std::endl;

    return 0;
}