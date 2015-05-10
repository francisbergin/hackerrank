from operator import itemgetter
n=int(input())
l=[]
for i in range(n):
	l.append(input().split())
l.sort(key=itemgetter(2))
for x in l:
	if x[3] is 'M':
		print('Mr.', x[0], x[1])
	else:
		print('Ms.', x[0], x[1])
