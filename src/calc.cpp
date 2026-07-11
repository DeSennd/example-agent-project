#include "calc.h"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) return 0;
    return a / b;
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; ++i)
        result *= base;
    return result;
}

int modulo(int a, int b) {
    return a % b;
}
