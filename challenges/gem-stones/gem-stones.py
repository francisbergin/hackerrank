
summ = []
for i in range(26):
	summ.append(0)

already = []
for i in range(26):
	already.append(0)

N = int(raw_input())

for a in range(0,N):
	del already[:]
	for i in range(26):
		already.append(0)
	val = list(raw_input())
	for b in val:
		already[ord(b)-98] += 1
		if already[ord(b)-98] == 1:
			summ[ord(b)-98] += 1

summ1 = 0

for c in range(26):
	if summ[c] == N:
		summ1 += 1

print summ1
