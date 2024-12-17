#include <iostream>
#include <cstddef>

const std::size_t MAX_SIZE = 256;

void readArray(std::size_t &size, int arr[]);
void read(std::size_t &sizeX, int x[], std::size_t &sizeY, int y[]);

void printArray(const std::size_t size, const int arr[]);

std::size_t merge(const std::size_t lenX, const int x[], const std::size_t lenY, const int y[], int res[])
{
    std::size_t idxX = 0, idxY = 0;
    std::size_t lenRes = lenX + lenY;

    for (std::size_t idxRes = 0; idxRes < lenRes; ++idxRes)
    {
        bool flag = idxY >= lenY || (idxX < lenX && x[idxX] <= y[idxY]);
        if (flag)
        {
            res[idxRes] = x[idxX];
            ++idxX;
        }
        else
        {
            res[idxRes] = y[idxY];
            ++idxY;
        }
    }

    return lenRes;
}

int main()
{
    int a[MAX_SIZE / 2], b[MAX_SIZE / 2], result[MAX_SIZE];
    std::size_t lenA, lenB;

    read(lenA, a, lenB, b);

    std::size_t len = merge(lenA, a, lenB, b, result);

    printArray(len, result);

    return 0;
}

void readArray(std::size_t &size, int arr[])
{
    std::cin >> size;

    for (std::size_t i = 0; i < size; ++i)
        std::cin >> arr[i];
}
void read(std::size_t &sizeX, int x[], std::size_t &sizeY, int y[])
{
    readArray(sizeX, x);
    readArray(sizeY, y);
}

void printArray(const std::size_t size, const int arr[])
{
    std::cout << size << std::endl;

    for (std::size_t i = 1; i < size; ++i)
        std::cout << arr[i - 1] << ' ';
    std::cout << arr[size - 1] << std::endl;

    return;
}