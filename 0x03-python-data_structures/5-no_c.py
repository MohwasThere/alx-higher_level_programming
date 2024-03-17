#!/usr/bin/python3
def no_c(my_string):
    s = list(my_string)
    str = ""
    for i in range(len(my_string)):
        if (s[i] == 'c' or s[i] == 'C'):
            s[i] = ''
    for i in range(len(s)):
        str += s[i]
    return (str)
