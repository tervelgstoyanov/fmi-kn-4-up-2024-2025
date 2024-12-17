#include <iostream>

/* Helper function */
unsigned int countOccurencesOfDigit(unsigned int digit, unsigned int number)
{
    /* Corner case */
    if (number == 0) return number == digit;
    
    /* Normal case */
    unsigned int counter = 0;

    while (number > 0)
    {
        unsigned int currentDigit = number % 10;
        
        if (currentDigit == digit)
            ++ counter;

        number /= 10;
    }

    return counter;
}

/* The expected solution function */
bool check(unsigned int n, unsigned int k)
{
    /* Zero is contained at least zero times(>=0) in every natural number */
    if (n == 0)
        return true;
    
    /* Normal case, for each digit of n */
    while (n > 0)
    {
        unsigned int currentDigit = n % 10;
        /* check how many times the digit has occured in k */
        if (countOccurencesOfDigit(currentDigit, k) < currentDigit)
            return false;

        n /= 10;
    }

    return true;
}

int main()
{
    unsigned int n, k;
    std::cin >> n >> k;

    std::cout << check(n, k) << std::endl;

    return 0;
}