
T = int(raw_input())

for i in range(0, T):
	N = raw_input()
	N = N.split()
	N = map(int, N)
	N, C, M = N
	
	E = N/C
	W = N/C
	
	while W >= M:
		NW = W/M
		E += W/M
		W -= (W/M)*M
		W += NW
	
	print E
