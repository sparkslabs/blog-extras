
#include "cpp03generators.hpp"
#include <iostream>

// Generator definition
class Fibonnaci: public Generator {
    int a, b, s;
public:
    Fibonnaci() : a(1), b(1), s(0)  { }
    int next() {
    GENERATOR_CODE_START
        while ( true ) {
            YIELD(a);
            s = a + b;
            a = b;
            b = s;
        };
    GENERATOR_CODE_END
    };
};

// Usage:
void runFibonnaci() {
    Fibonnaci a;
    for(int j=0; j<22; j++) {
        try {
            std::cout << "Yield in Fibonnaci:"<< j<< " value:" << a.next() << std::endl;
        } catch(StopIteration null){
            std::cout << " Exception Caught" << "...\n";
            break;
        }
    };
}

int main(int argc, char **argv) {
    runFibonnaci();
    return 0;
}
