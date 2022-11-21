#!/usr/bin/python3
'''Create a function to sort and count coin'''


def makeChange(coins, total):
    '''Function to sort and count coin'''
    if total <= 0:
        return 0
    coinlist = [0] * (total + 1)

    coins.sort(reverse=True)

    for coin in coins:
        for i in range( coin, total + 1, coin):
            if coinlist[i-coin]:
                if (coinlist[i]):
                    coinlist[i] = min(coinlist[i], coinlist[i - coin] + 1)
                else:
                    coinlist[i] = coinlist[i - coin] + 1
            elif (not i % coin):
                coinlist[i] = i

    return coinlist[total] if coinlist[total] else -1

    # return -1 if total else count
