#include <iostream>
#include <cstddef>

/* Closest bigger than 10 power of 2 */
const std::size_t MAX_SIZE = 16;

/* Helper functions */
void readArr(int arr[], const std::size_t size);

void markOccurences(
    const int arr[], const std::size_t size,
    const std::size_t startIdx, bool occured[]
) {
    for (std::size_t i = startIdx; i < size; ++i)
        if (arr[i] == arr[startIdx])
            occured[i] = true;
}

/* Solution function */
unsigned int countUniqueValues(const int arr[], const std::size_t size)
{
    unsigned int uniqueCounter = 0;
    /* array to check if a number is already counted */
    bool occured[MAX_SIZE];
    /* initially all numbers are not counted */
    for (std::size_t i = 0; i < size; ++i)
        occured[i] = false;

    /* for each number in the array */
    for (std::size_t i = 0; i < size; ++i)
    {
        /* if the number is still not counted */
        if (occured[i] == false)
        {
            ++uniqueCounter;
            /* mark each other occurence of arr[i] */
            markOccurences(arr, size, i, occured);
        }
    }

    return uniqueCounter;
}

int main()
{
    int arr[MAX_SIZE];
    /* We always have 10 elements */
    const std::size_t size = 10;
    readArr(arr, size);

    std::cout << countUniqueValues(arr, size) << std::endl;
    
    return 0;
}

void readArr(int arr[], const std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
        std::cin >> arr[i];
}