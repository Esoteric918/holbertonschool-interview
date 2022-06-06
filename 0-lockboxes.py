#!/usr/bin/python3
'''Lockboxes'''


def  canUnlockAll(boxes):
    '''boxes that can be unlocked'''
    keyset = {0}

    def boxOps(boxes, open = 0):
        '''boxes that can be unlocked'''

        for key in boxes[open]:
            if key in keyset:
                continue
            keyset.add(key)
            if len(keyset) == len(boxes):
                return True
            else:
                if set(boxes[key]).issubset(keyset):
                    continue
                return boxOps(boxes, key)
        return False

    return boxOps(boxes)


