#!/usr/bin/python3
def uppercase(str):
    for i in str:
        if 97 <= ord(i) <= 122:
            i -= 32
        print("{:s}".format(i), end="")
    print()
