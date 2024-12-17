#include <iostream>
#include <cstddef>

const std::size_t MAX_SIZE = 256;

void readArray(std::size_t &size, int arr[]);
void printArray(const std::size_t size, const int arr[]);

std::size_t findMin(const std::size_t startIdx, const std::size_t size, const int arr[])
{
    int minIdx = startIdx;

    for (std::size_t i = startIdx + 1; i < size; ++i)
        minIdx = (arr[i] < arr[minIdx] ? i : minIdx);
    
    return minIdx;
}
void selectionSort(const std::size_t size, int arr[])
{
    for (int i = 0; i < size; ++i)
    {
        int minIdx = findMin(i, size, arr);

        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

int main()
{
    std::size_t len;
    int arr[MAX_SIZE];

    readArray(len, arr);

    selectionSort(len, arr);

    printArray(len, arr);

    return 0;
}

void readArray(std::size_t &size, int arr[])
{
    std::cin >> size;

    for (std::size_t i = 0; i < size; ++i)
        std::cin >> arr[i];

    return;
}
void printArray(const std::size_t size, const int arr[])
{
    std::cout << size << std::endl;

    for (std::size_t i = 1; i < size; ++i)
        std::cout << arr[i - 1] << ' ';
    std::cout << arr[size - 1] << std::endl;

    return;
}