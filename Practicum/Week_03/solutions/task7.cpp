#include <iostream>

int main()
{
    unsigned int bills50, bills20, bills10, bills5;
    unsigned int cash;

    std::cin >> bills50 >> bills20 >> bills10 >> bills5;
    std::cin >> cash;

    unsigned int used50s, used20s, used10s, used5s;

    if (cash >= 50) {
        used50s = cash / 50;

        if (used50s > bills50) {
            used50s = bills50;
        }
        cash -= used50s * 50;
    }

    if (cash >= 20) {
        used20s = cash / 20;

        if (used20s > bills20) {
            used20s = bills20;
        }
        cash -= used20s * 20;
    }

    if (cash >= 10) {
        used10s = cash / 10;

        if (used10s > bills10) {
            used10s = bills10;
        }
        cash -= used10s * 10;
    }

    if (cash >= 5) {
        used5s = cash / 5;

        if (used5s > bills5) {
            used5s = bills5;
        }
        cash -= used5s * 5;
    }

    if (cash != 0) {
        std::cout << "The sum cannot be returned with the given banknotes\n";
        return 0;
    }

    if (used50s >= 1) {
        std::cout << used50s << " banknote"
            << (used50s > 1 ? "s" : "")
            << " of 50\n";
    }
    if (used20s >= 1) {
        std::cout << used20s << " banknote"
            << (used20s > 1 ? "s" : "")
            << " of 20\n";
    }
    if (used10s >= 1) {
        std::cout << used10s << " banknote"
            << (used10s > 1 ? "s" : "")
            << " of 10\n";
    }
    if (used5s >= 1) {
        std::cout << used5s << " banknote"
            << (used5s > 1 ? "s" : "")
            << " of 5\n";
    }
    
    return 0;
}