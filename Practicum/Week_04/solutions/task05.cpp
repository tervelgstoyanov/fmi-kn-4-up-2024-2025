#include <iostream>

int main()
{
    int n;

    do {
        std::cin >> n;

        if (n <= 0)
            std::cout << "A positive integer is expected\n";
    } while (n <= 0);

    std::cout << "Nice job, you entered a positive integer\n";

    return 0;
}