#!/usr/bin/python

print("Note: this example is hypothetical and won't do what's wanted")
if 0:

    def printing_fibonnaci():
        a, b = 1,1
        while True:
            print("Fib:", a)
            a,b = b, a+b

    # NOTE: This is not valid, it won't work
    last = 1
    for i in printing_fibonnaci(): # NOTE: This won't work
        gr = i/last
        print("Golden Ratio:", gr)
        last = i

