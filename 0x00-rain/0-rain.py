#!/usr/bin/python3

"""initial file for rain module"""


def rain(walls):
    """ Calculate how much water will be retained after it rains. """
    if not walls:
        return 0
    left = 0
    right = len(walls) - 1
    left_max = walls[left]
    right_max = walls[right]
    total = 0
    while left < right:
        if walls[left] < walls[right]:
            left += 1
            if walls[left] > left_max:
                left_max = walls[left]
            else:
                total += left_max - walls[left]
        else:
            right -= 1
            if walls[right] > right_max:
                right_max = walls[right]
            else:
                total += right_max - walls[right]
    return total
