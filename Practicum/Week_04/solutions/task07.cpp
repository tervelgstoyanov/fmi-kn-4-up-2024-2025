#include <iostream>

int main()
{
    unsigned int n;
    char ch;

    std::cin >> n >> ch;

    if (n % 2 == 0) n += 1;

    /* Find how many rows we have */
    unsigned int m = n / 2 + 1;

    for (int i = 0; i < m; ++i)
    {
        int spaceNumber = m - i;
        for (int j = 1; j < spaceNumber; ++j)
            std::cout << ' ';

        int chNumber = 2 * i + 1;
        for (int j = 0; j < chNumber; ++j)
            std::cout << ch;
        
        std::cout << std::endl;
    }

    for (int i = 0; i < m - 1; ++i)
        std::cout << ' ';
    std::cout << ch << std::endl;

    return 0;
}