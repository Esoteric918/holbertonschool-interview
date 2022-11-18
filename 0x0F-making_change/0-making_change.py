#!/usr/bin/python3
'''Create a function to sort and count coin'''


def makeChange(coins, total):
    '''Function to sort and count coin'''
    if total <= 0:
        return 0
    count = 0

    coins.sort(reverse=True)

    for coin in coins:
        count += total // coin
        total %= coin
    return -1 if total else count
