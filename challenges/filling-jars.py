#!/usr/bin/env python3

jars = input()
jars = jars.split()
jars = map(int, jars)
jars, ops = jars

candies = 0

for i in range(ops):
	a = input()
	a = a.split()
	a = map(int, a)
	a, b, k = a

	candies += k*(b-a+1)

print(candies//jars)
