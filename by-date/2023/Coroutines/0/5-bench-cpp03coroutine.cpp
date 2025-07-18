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

long count = 0;

void timeFibonnaci(int iterlimit) {
    Fibonnaci a;
    int result = 0;
    for(int j=0; j<iterlimit; j++) {
        try {
            result = a.next();
        } catch(StopIteration null){
            std::cout << " Exception Caught" << "...\n";
            break;
        }

        switch(j) {
            case 0: if (result != 1) std::cout << "Fail 0" << result << "\n"; count++ ; break;
            case 1: if (result != 1) std::cout << "Fail 1" << result << "\n"; count++ ; break;
            case 2: if (result != 2) std::cout << "Fail 2" << result << "\n"; count++ ; break;
            case 3: if (result != 3) std::cout << "Fail 3" << result << "\n"; count++ ; break;
            case 4: if (result != 5) std::cout << "Fail 4" << result << "\n"; count++ ; break;
            case 5: if (result != 8) std::cout << "Fail 5" << result << "\n"; count++ ; break;
            case 6: if (result != 13) std::cout << "Fail 6" << result << "\n"; count++ ; break;
            case 7: if (result != 21) std::cout << "Fail 7" << result << "\n"; count++ ; break;
            case 8: if (result != 34) std::cout << "Fail 8" << result << "\n"; count++ ; break;
            case 9: if (result != 55) std::cout << "Fail 9" << result << "\n"; count++ ; break;
            case 10: if (result != 89) std::cout << "Fail 10" << result << "\n"; count++ ; break;
            case 11: if (result != 144) std::cout << "Fail 11" << result << "\n"; count++ ; break;
            case 12: if (result != 233) std::cout << "Fail 12" << result << "\n"; count++ ; break;
            case 13: if (result != 377) std::cout << "Fail 13" << result << "\n"; count++ ; break;
            case 14: if (result != 610) std::cout << "Fail 14" << result << "\n"; count++ ; break;
            case 15: if (result != 987) std::cout << "Fail 15" << result << "\n"; count++ ; break;
            case 16: if (result != 1597) std::cout << "Fail 16" << result << "\n"; count++ ; break;
            case 17: if (result != 2584) std::cout << "Fail 17" << result << "\n"; count++ ; break;
            case 18: if (result != 4181) std::cout << "Fail 18" << result << "\n"; count++ ; break;
            case 19: if (result != 6765) std::cout << "Fail 19" << result << "\n"; count++ ; break;
            case 20: if (result != 10946) std::cout << "Fail 20" << result << "\n"; count++ ; break;
            case 21: if (result != 17711) std::cout << "Fail 21" << result << "\n"; count++ ; break;
            default:
                
                break;
        }

    };
    if (result == 17711) {
        count++;
    }

}

int main(int, char ** argv) {
    int iters = atoi(argv[1]);
    for(long k=0; k<1000; k++) {
        for(long j=0; j<1000; j++) {
            for(long i=0; i<1000; i++) {
                timeFibonnaci(iters);
            }
        }
    }
    std::cout << count << "\n";
    return 0;
}
