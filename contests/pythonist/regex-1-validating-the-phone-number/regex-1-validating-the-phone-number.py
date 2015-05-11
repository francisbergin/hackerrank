#!/usr/bin/env python3

import re

a = re.compile('^[7-9]\d{9}$')

N = int(input())

for _ in range(N):
    if a.match(input()):
        print('YES')
    else:
        print('NO')
