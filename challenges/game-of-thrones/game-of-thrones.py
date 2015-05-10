#!/usr/bin/env python3

import sys

c = list(input())
a = [0]*26
e = 0

for i in c:
    a[ord(i)-97] += 1

for i in a:
    if (i % 2 != 0):
        if ((len(c) % 2 == 0) or ((len(c) % 2 != 0) and (e == 1))):
            print('NO')
            sys.exit()
        else:
            e += 1

print('YES')
