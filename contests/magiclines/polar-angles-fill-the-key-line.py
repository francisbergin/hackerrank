# Enter your code here. Read input from STDIN. Print output to STDOUT
from math import hypot, atan2, pi
def polar(x, y):
    k = 180.0 * atan2(y, x) / pi
    if k<0: k+=360
    return  k,hypot(x, y)

n = int(raw_input())
ans1 = []
ans = []
for i in range(n):
    x,y = map(int,raw_input().split())
    ans.append([x,y])
    ans1.append(polar(x,y))
#print polar(3,5)
d = {}
ind = []
for a,b in enumerate(ans1):
    d[a] = b
for key in sorted(d, key=d.__getitem__):
    ind.append(key)
for i in ind:
    print ans[i][0],ans[i][1]
    # Enter your code here. Read input from STDIN. Print output to STDOUT
