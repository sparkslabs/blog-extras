#include "cpp03generators.hpp"
#include <iostream>

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

void timeFibonnaci() {
    Fibonnaci a;
    for(int j=0; j<22; j++) {
        try {
            a.next();
        } catch(StopIteration null){
            std::cout << " Exception Caught" << "...\n";
            break;
        }
    };
}

int main(int, char **) {
    for(long k=0; k<1000; k++) {
        for(long j=0; j<1000; j++) {
            for(long i=0; i<1000; i++) {
                timeFibonnaci();
            }
        }
    }
    return 0;
}
