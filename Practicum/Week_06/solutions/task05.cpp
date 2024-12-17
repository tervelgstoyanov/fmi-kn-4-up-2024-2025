#include <iostream>
#include <cstddef>

const std::size_t MAX_DEGREE = 8;

void read(unsigned int &degree, double coefs[], double &x0);

double polyValueAt(const unsigned int degree, const double coefs[], const double x0)
{
    double value = 0, step = 1;

    for (std::size_t i = 0; i <= degree; ++i)
    {
        value += coefs[i] * step;
        step *= x0;
    }

    return value;
}

int main()
{
    unsigned int degree;
    double polyCoefs[MAX_DEGREE];
    double x0;

    read(degree, polyCoefs, x0);

    std::cout << polyValueAt(degree, polyCoefs, x0) << std::endl;

    return 0;
}

void read(unsigned int &degree, double coefs[], double &x0)
{
    std::cin >> degree;

    for (int i = 0; i <= degree; ++i)
        std::cin >> coefs[i];
    
    std::cin >> x0;

    return;
}