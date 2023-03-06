#include <iostream>
#include "Complex.h"

int main()
{
    Complex d1(1, 1);
    Complex d2(2, 2);
    Complex d8;
    std::cin >> d8;
    Complex d3 = d1 + d2;
    Complex d4 = d1 - d2;
    Complex d5 = d1 * d2;
    Complex d6 = d1 / d2;
    bool solve = d1 == d2;
    Complex d7;
    d7 = d1;
    double Re = d1[0];
    double Im = d1[1];
    std::cout << d3 << d4 << d5 << d6 << d7 << d8;
    std::cout << solve << std::endl;
    std::cout << Re << " " << Im << std::endl;

    return 0;
}

