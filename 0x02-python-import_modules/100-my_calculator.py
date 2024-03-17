#!/usr/bin/python3

if __name__ == "__main__":
    from calculator_1 import add, mul, div, sub
    from sys import argv

    if (len(argv) != 4):
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        exit(1)
    else:
        a = int(argv[1])
        b = int(argv[3])
        result = 0
    if (argv[2] == '+'):
        result = add(a, b)
        print("{} + {} = {}".format(a, b, result))
    elif (argv[2] == '-'):
        result = sub(a, b)
        print("{} - {} = {}".format(a, b, result))
    elif (argv[2] == '/'):
        result = div(a, b)
        print("{} / {} = {}".format(a, b, result))
    elif (argv[2] == '*'):
        result = mul(a, b)
        print("{} * {} = {}".format(a, b, result))
    else:
        print("Unknown operator. Available operators: +, -, * and /")
        exit(1)
