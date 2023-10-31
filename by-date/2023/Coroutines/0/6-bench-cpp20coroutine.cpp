#include "cpp20generators.hpp"

simple_generator<int> fib(int max) {
    int a{1}, b{1}, n{0};
    for(int i=0; i< max; i++) {
        co_yield a;
        n = a + b;
        a = b;
        b = n;
    }
}

void timeFibonnaci() {
    auto a = fib(22);
    for(int j=0; j<22; j++) {
        if (a.running()) {
            a.try_next();
            if (a.running()) {
                a.take();
            }
        }
    }
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
