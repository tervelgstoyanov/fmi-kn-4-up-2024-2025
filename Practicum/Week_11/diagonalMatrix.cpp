#include <iostream>
#include <cstdio>

std::size_t getIndexOfMin(
    const int arr[],
    const std::size_t length,
    const std::size_t startIndex
)
{
    std::size_t minIndex = startIndex;
    for (std::size_t j = startIndex; j < length; ++j)
        if (arr[j] < arr[minIndex])
            minIndex = j;

    return minIndex;
}
void swapElements(
    int arr[],
    const std::size_t idx1,
    const std::size_t idx2
)
{
    int temp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = temp; 
}


void selectionSort(int arr[], const std::size_t length)
{
    for (std::size_t idx = 0; idx < length; ++idx)
    {
        std::size_t minIndex = getIndexOfMin(arr, length, idx);
        
        swapElements(arr, idx, minIndex);
    }
}
const std::size_t MAX_COLS = 16;
void printMatrix(
    const int matr[][MAX_COLS],
    const std::size_t rows,
    const std::size_t cols
)
{
    for (std::size_t i = 0; i < rows; ++i)
    {
        for (std::size_t j = 0; j < cols; ++j)
            std::cout << matr[i][j] << ' ';
        std::cout << std::endl; 
    }
}

bool isValidPosition(
    const std::size_t rows,
    const std::size_t cols,
    const std::size_t tempI,
    const std::size_t tempJ
)
{
    return tempI < rows && tempJ < cols;
}

void sortDiagonal(
    int matr[][MAX_COLS],
    const std::size_t rows,
    const std::size_t cols,
    const std::size_t tempI,
    const std::size_t tempJ
)
{
    int arr[16];
    std::size_t idx = 0;
    std::size_t curr_i = tempI, curr_j = tempJ;
    while (isValidPosition(rows, cols, curr_i, curr_j))
    {
        arr[idx] = matr[curr_i][curr_j];
        ++idx;

        curr_i -= 1;
        curr_j += 1; 
    }

    selectionSort(arr, idx);

    idx = 0;
    curr_i = tempI; curr_j = tempJ;
    while (isValidPosition(rows, cols, curr_i, curr_j))
    {
        matr[curr_i][curr_j] = arr[idx];
        ++idx;

        curr_i -= 1;
        curr_j += 1; 
    }
}

void traverseDiagonally(
    int matr[][MAX_COLS],
    const std::size_t rows,
    const std::size_t cols
)
{
    std::size_t diag_start_i = 0, diag_start_j = 0;
    std::size_t diagonals = rows + cols - 1;

    for (std::size_t i = 1; i <= diagonals; ++i)
    {
        sortDiagonal(matr, rows, cols, diag_start_i, diag_start_j);

        if (i >= rows)
            diag_start_j += 1;
        else
            diag_start_i += 1;
    }
}

int main()
{
    // int arr[] = {1, 6, 3, 7, 4, 3};
    // std::size_t length = sizeof(arr) / sizeof(arr[0]);
    // selectionSort(arr, length);

    // for (std::size_t i = 0; i < length; ++i)
    //     std::cout << arr[i] << ' ';
    // std::cout << std::endl; 

    int matr[][MAX_COLS] = {
        {1, 2, 5, 7, 12},
        {3, 6, 9, 11, 14},
        {4, 8, 10, 13, 15}
    };
    printMatrix(matr, 3, 5);
    std::cout << std::endl;
    traverseDiagonally(matr, 3, 5);
    printMatrix(matr, 3, 5);

    return 0;
}