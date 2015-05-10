if __name__=="__main__":
	N = raw_input()
	N,T = N.split()
	N = int(N)
	T = int(T)
	
	W = raw_input()
	W = W.split()
	W = map(int, W)
	
	for i in range(0, T):
		i = raw_input()
		i,j = i.split()
		i = int(i)
		j = int(j)
		val = W[i]
		for a in range(i,j):
			if val > W[a+1]:
				val = W[a+1]
		print val
