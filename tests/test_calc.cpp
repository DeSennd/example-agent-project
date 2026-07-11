#include <cassert>
#include <iostream>
#include "calc.h"

int main() {
    assert(add(2, 3) == 5);
    assert(subtract(5, 3) == 2);
    assert(multiply(4, 3) == 12);
    assert(divide(10, 2) == 5);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
