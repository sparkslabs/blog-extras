
#include "cpp20generators.hpp"
#include <iostream>

// Generator definition:
simple_generator<int> fibs(int max) {
    int a{1}, b{1}, n{0};
    for(int i=0; i< max; i++) {
        co_yield a;
        n = a + b;
        a = b;
        b = n;
    }
}
int main(int, char**) {
    // Usage:
    for(auto i : fibs(20) ) {
        std::cout << "FIB : " <<  " : " <<  i << "\n";
    }
}
