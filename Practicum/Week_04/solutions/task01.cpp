#include <iostream>

int main()
{
    unsigned int n;

    std::cin >> n;
    
    for (unsigned int i = 1; i <= n; ++i)
        std::cout << i * i << ' ';
    
    std::cout << std::endl;
    
    return 0;
}