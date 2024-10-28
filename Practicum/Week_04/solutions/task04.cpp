#include <iostream>
#include <cmath>

int main()
{
    const double EPSILON = 0.01;
    double a, b, c;
    unsigned int n;
    double x, y;

    std::cin >> a >> b >> c;
    std::cin >> n;

    for (unsigned int i = 0; i < n; ++i)
    {
        std::cin >> x >> y;

        std::cout
            << std::boolalpha
            << (std::fabs((a * x + b * y + c) - 0) < EPSILON) << std::endl;
    }

    return 0;
}