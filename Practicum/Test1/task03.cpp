#include <iostream>
#include <cstddef>

const std::size_t MAX_SIZE = 128;

/* helper functions */
bool isSmallLetter(char c)
{
    return 'a' <= c && c <= 'z';
}
bool isCapitalLetter(char c)
{
    return 'A' <= c && c <= 'Z';
}
bool isPunctuation(char c)
{
    return c == '!' || c == '?';
}

/* Solution function */
void transformString(char str[])
{
    unsigned int diff = 'a' - 'A';

    for (std::size_t i = 0; str[i] != '\0'; ++i)
    {
        if (isPunctuation(str[i]) == true)
            str[i] = ' ';
        else if (isSmallLetter(str[i]) == true)
            str[i] -= diff;
        else if (isCapitalLetter(str[i]) == true)
            str[i] += diff;
    }
}

int main()
{
    char str[MAX_SIZE];
    std::cin.getline(str, MAX_SIZE - 1);

    transformString(str);

    std::cout << str << std::endl;

    return 0;
}