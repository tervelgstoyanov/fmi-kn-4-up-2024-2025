#include <iostream>

int main()
{
    /* Reading the flags */
    bool flag1, flag2, flag3;
    std::cin >> flag1 >> flag2 >> flag3;

    /* The condition only one to be true
       is the same as their int-sum to be 1 */
    std::cout << (flag1 + flag2 + flag3 == 1) << std::endl;

    return 0;
}