#!/usr/bin/python3
''' In a text file, there is a single character H. Your text editor
    can execute only two operations in this file:
    Copy All and Paste. Given a number n, write a method that calculates the fewest number of
    operations needed to result in exactly n H characters in the file.'''


def minOperations(n):
    '''Returns an integer
        If n is impossible to achieve, return 0'''
    if n <= 0:
        return 0
    count = 0
    factor = 2
    while n > 1:
        if n % factor == 0:
            n= n //  factor
            count += factor
        else:
            if n % factor:
                factor += 1
    return count
