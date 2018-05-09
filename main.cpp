#include "fib.h"

#include <iostream>

int main() {
    Fib fib;

    auto result = fib(1, 1, 15);
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}

