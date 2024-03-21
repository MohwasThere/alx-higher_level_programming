#!/usr/bin/python3
def uniq_add(my_list=[]):
    """
    adds all unique integers in a list (only once for each integer).
    returns new list
    """
    result = 0
    new_list = []
    for i in range(len(my_list)):
        if i not in new_list:
            result += my_list[i]
            new_list.append(my_list[i])
    return(result)
