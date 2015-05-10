#!/usr/bin/env python2

import fileinput

def main():
	t = int(raw_input())
	for i in range(0,t):
		n = int(raw_input())
		process(n)

def process(n):
	h = 1
	for i in range(0,n):
		if i % 2 == 0:
			h = monsoon(h)
		else:
			h = summer(h)
	print h

def monsoon(h):
	return h*2

def summer(h):
	return h+1

if __name__ == "__main__":
	main()
