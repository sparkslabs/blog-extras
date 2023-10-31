#!/usr/bin/python

def fib():
    n, a, b = 0, 1, 1
    while n<91: # Match C++, not really needed
        yield a
        a, b = b, a+b
        n +=1

def timeFibonnaci():
    f = fib()
    for i in range(22):
        f.__next__()

for k in range(1000):
    for j in range(1000):
        for i in range(1000):
            timeFibonnaci()
