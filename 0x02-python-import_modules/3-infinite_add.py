#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    length = len(argv)
    num = 0
    if length == 1:
        print("{}".format(num))
    else:
        for i in range(1, length):
            num += int(argv[i])
        print("{}".format(num))
