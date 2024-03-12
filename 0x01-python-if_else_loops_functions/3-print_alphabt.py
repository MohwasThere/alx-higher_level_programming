#!/usr/bin/python3
for i in range(97, 97+26):
    if i == 101:
        continue
    elif i == 113:
        continue
    else:
        print('{}'.format(chr(i)), end="")
