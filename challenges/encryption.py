#!/usr/bin/env python3

import math

s = input().replace(' ', '')
l = len(s)

r = math.floor(math.sqrt(l))
c = math.ceil(math.sqrt(l))

for ic in range(c):
    for ir in range(r+1):
        ind = ic + ir*c
        if ind < l:
            print(s[ind], end='')

    print(' ', end='')

print()
