#!/usr/bin/env python3
def remove_char_at(str, n):
    temp = ""
    if (n < 0):
        return str
    for i in range(len(str)):
        if (i == n):
            continue
        temp += str[i]
    return temp