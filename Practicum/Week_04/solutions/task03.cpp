#include <iostream>

int main()
{
    unsigned int n;
    unsigned int minDigit = 9, maxDigit = 0;

    std::cin >> n;

    do {
        unsigned int currDigit = n % 10;
        n /= 10;
        
        minDigit = std::min(currDigit, minDigit);
        maxDigit = std::max(currDigit, maxDigit);
    } while (n != 0);

    std::cout
        << "The biggest digit is " << maxDigit << ".\n"
        << "The smallest digit is " << minDigit << ".\n";

    return 0;
}