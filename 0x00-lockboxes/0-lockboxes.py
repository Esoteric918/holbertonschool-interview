#!/usr/bin/python3
'''Lockboxes'''


def canUnlockAll(boxes):
    '''boxes that can be unlocked'''
    keyset = {0}

    for key in boxes[0]:
        if (0 <= key < len(boxes)) and key not in keyset:
            boxes[0].extend(boxes[key])
            keyset.add(key)

    # print(keyset)
    return len(keyset) == len(boxes)
