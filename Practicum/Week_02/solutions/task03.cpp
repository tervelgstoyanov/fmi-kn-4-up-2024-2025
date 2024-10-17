#include <iostream>
#include <cmath>

int main()
{
    /* Declaring and reading double sizes */
    double l, h, a, b;
    std::cin >> l >> h >> a >> b;
    
    /* Solving the problem with the ceil function */
    double rows1 = std::ceil(h/b);
    double columns1 = std::ceil(l/a);
    double rows2 = std::ceil(l/b);
    double columns2 = std::ceil(h/a);
    
    /* Solving the problem using bool-casting */
    // int rows1 = h/b + (bool)(h%b);
    // int columns1 = l/a + (bool)(l%a);
    // int rows2 = l/b + (bool)(l%b);
    // int columns2 = h/a + (bool)(h%a);

    /* Calculating the two potential answers */
    double result1 = rows1 * columns1;
    double result2 = rows2 * columns2;
    
    /* And printing the smaller one as final answer */
    std::cout<<(result1 + result2 - std::fabs(result1 - result2)) / 2<<std::endl;

    return 0;
}