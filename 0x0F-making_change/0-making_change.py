#!/usr/bin/python3

def makeChange(coins, total):
    count = 0
    coins.sort(reverse=True)
    for coin in coins:
        count += total // coin
        total %= coin
    return -1 if total else count
