#ifndef FIB_H
#define FIB_H

#include <vector>

class Fib {
public:
    using IntVector = std::vector<int>;

    IntVector operator()(int v1, int v2, int count);
};

#endif
