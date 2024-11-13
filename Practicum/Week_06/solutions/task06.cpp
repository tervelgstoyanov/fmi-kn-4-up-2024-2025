#include <iostream>
#include <cstddef>

const std::size_t MAX_SIZE = 16;

void print(const std::size_t n_digits, const unsigned int digits[]);

void reverse(const std::size_t i, unsigned int arr[])
{
    if (i == 0 || i == 1) return;
    
    std::size_t left = 0, right = i - 1;

    while (left < right)
    {
        unsigned int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        ++left;
        --right;
    }

    return;
}
std::size_t fillDigits(unsigned int n, unsigned int digits[])
{
    if (n == 0)
    {
        digits[0] = 0;
        return 1;
    }

    std::size_t i = 0;
    while (n > 0)
    {
        digits[i] = n % 10;
        n /= 10;
        
        ++i;
    }

    reverse(i, digits);

    return i;
}

int main()
{
    unsigned int n;
    unsigned int digits[MAX_SIZE];

    std::cin >> n;

    std::size_t n_digits = fillDigits(n, digits);

    print(n_digits, digits);

    return 0;
}

void print(const std::size_t n_digits, const unsigned int digits[])
{
    std::cout << n_digits << std::endl;
    std::cout << '[';
    
    for (std::size_t i = 1; i < n_digits; ++i)
        std::cout << digits[i - 1] << ", ";
    std::cout << digits[n_digits - 1] << "]\n";

    return;
}