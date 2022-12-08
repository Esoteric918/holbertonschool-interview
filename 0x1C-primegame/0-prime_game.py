#!/usr/bin/python3
"""Prime Game Module"""


def isWinner(x, nums):
    """Function that determines if a player is the winner"""
    if x <= 0 or not nums:
        return None
    n = max(nums)
    primes = [True for i in range(n + 1)]
    p = 2
    while p * p <= n:
        if primes[p]:
            for i in range(p * 2, n + 1, p):
                primes[i] = False
        p += 1
    primes[0] = False
    primes[1] = False
    count = 0
    for i in range(x):
        if primes[nums[i]]:
            count += 1
    if count * 2 == x:
        return None
    if count * 2 > x:
        return "Maria"
    return "Ben"
