#!/usr/bin/python3
for i in range(96+26, 96, -1):
    print('{}'.format(chr(i - 32*(i % 2))), end="")
