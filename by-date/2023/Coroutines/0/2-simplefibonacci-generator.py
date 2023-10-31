#!/usr/bin/python


def fibonnaci():
    a, b = 1,1
    while True:
        yield a
        a,b = b, a+b

last = 1

for i in fibonnaci():
    gr = i/last
    print("Golden Ratio:", gr)
    if i >10**9:
        break
    last = i

