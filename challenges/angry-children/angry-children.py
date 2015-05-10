n = int(input())
b = [0]*n
k = int(input())
res = 10**9
for i in range(n):
	b[i] = int(input())
b.sort()
for i in range(n-k+1):
	diff = b[i+k-1] - b[i]
	if diff < res:
		res = diff
print(res)
