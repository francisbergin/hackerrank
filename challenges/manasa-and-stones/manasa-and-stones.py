t = int(input())

for _ in range(t):
    ans = []
    n = int(input())
    a = int(input())
    b = int(input())
    for i in range(n):
        ans.append((i*a)+((n-i-1)*b))
    ans = list(set(ans))
    ans.sort()
    print(' '.join(map(str, ans)))
