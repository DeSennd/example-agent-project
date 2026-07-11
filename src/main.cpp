#include <iostream>
#include "calc.h"

int main() {
    std::cout << "5 + 3 = " << add(5, 3) << std::endl;
    std::cout << "5 - 3 = " << subtract(5, 3) << std::endl;
    std::cout << "5 * 3 = " << multiply(5, 3) << std::endl;
    std::cout << "6 / 3 = " << divide(6, 3) << std::endl;
    std::cout << "2 ^ 3 = " << power(2, 3) << std::endl;
    std::cout << "10 % 3 = " << modulo(10, 3) << std::endl;
    return 0;
}
