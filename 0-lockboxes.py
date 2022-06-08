#!/usr/bin/python3
'''Lockboxes'''


def  canUnlockAll(boxes):
    '''boxes that can be unlocked'''
    keyset = {0}

    def boxOpener(opening=0):
        '''boxes that can be unlocked'''
        for key in boxes[opening]:
            if not (0 <= key < len(boxes)) or key in keyset:
                continue
            keyset.add(key)
            boxOpener(key)

    boxOpener()
    # print(keyset)
    return len(keyset) == len(boxes)
