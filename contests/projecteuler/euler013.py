#!/usr/bin/env python3

n = int(input())
ans = 0
for i in range(n):
    ans += int(input())
ans = str(ans)
print(ans[:10])
