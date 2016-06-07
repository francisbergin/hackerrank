#!/usr/bin/env python3

import math

t = int(input())

for _ in range(t):
    s = input()
    l, r = 0, len(s)-1
    index = -1
    while l < r:
        if s[l] != s[r]:
            if s[l+1:math.ceil(len(s)/2)] == s[r:len(s)//2:-1]:
                index = l
                break
            if s[l:math.ceil(len(s)/2)-1] == s[r-1:len(s)//2-1:-1]:
                index = r
                break
        l += 1
        r -= 1
    print(index)
