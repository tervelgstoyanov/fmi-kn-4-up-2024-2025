#include <iostream>
#include <cstddef>

const std::size_t MAX_SIZE = 256;

// helper functions -> realization after main
void readArray(const std::size_t size, double arr[]);
void read(std::size_t &size, double x[], double y[]);

double dotproduct(const std::size_t n, const double x[], const double y[])
{
    double result = 0;

    for (std::size_t i = 0; i < n; ++i)
        result += x[i] * y[i];

    return result;
}

int main()
{
    double vec1[MAX_SIZE], vec2[MAX_SIZE];
    std::size_t n;

    read(n, vec1, vec2);

    std::cout << dotproduct(n, vec1, vec2) << std::endl;

    return 0;
}

void readArray(const std::size_t size, double arr[])
{
    for (std::size_t i = 0; i < size; ++i)
        std::cin >> arr[i];

    return;
}
void read(std::size_t &size, double x[], double y[])
{
    std::cin >> size;

    readArray(size, x);
    readArray(size, y);

    return;
}