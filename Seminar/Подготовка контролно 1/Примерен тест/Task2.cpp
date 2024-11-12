#include <iostream>
using namespace std;

bool isFactorial(int X)
{
    if (X <= 0)
    {
        return false;
    }

    int copy = X;
    int divisor = 1;

    while (copy > 1)
    {
        divisor++;
        if (copy % divisor != 0)
        {
            return false;
        }
        copy /= divisor;
    }
    return copy == 1;
}

int main()
{
    int X;
    cin >> X;

    cout << boolalpha << isFactorial(X) << endl;

    return 0;
}