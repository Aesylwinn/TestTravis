#include "fib.h"

Fib::IntVector Fib::operator()(int v1, int v2, int count) {
    // Setup
    IntVector result;
    result.push_back(v1);
    result.push_back(v2);

    // Calculate rest
    for (int i = 0; i < count; ++i) {
        int temp = v1 + v2;
        v1 = v2;
        v2 = temp;
        result.push_back(temp);
    }

    return result;
}

