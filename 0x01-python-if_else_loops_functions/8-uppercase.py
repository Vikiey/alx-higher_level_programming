#!/usr/bin/python3
def uppercase(str):
    num = ord(str)
    for num in (97, 123):
        print("{:s}".format(num - 32), end="")
