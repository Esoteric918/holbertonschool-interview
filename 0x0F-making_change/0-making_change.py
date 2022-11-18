#!/usr/bin/python3
'''Create a function to sort and count coin'''


def makeChange(coins, total):
    '''Function to sort and count coin'''
    if total <= 0:
        return 0
    coinlist = [0] * len(coins)

    coins.sort(reverse=True)

    for coin in coins:
        for i in range( coin, total + 1, coin):
            coinlist[coins.index(coin)] += 1
            total -= coin
            if total == 0:
                return sum(coinlist)

    return -1

    # return -1 if total else count
