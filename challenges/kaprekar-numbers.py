p = int(input())
q = int(input())

a = []

for i in range(p, q+1):
    d = len(str(i))
    s = str(i*i)
    s = s.zfill(len(s)+1 if len(s)%2!=0 else 0)
    if int(s[:d]) + int(s[d:] if s[d:] else 0) == i:
        a.append(i)

print(' '.join([str(i) for i in a]) if a else 'INVALID RANGE')
