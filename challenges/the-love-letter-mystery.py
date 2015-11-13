#!/usr/bin/env python3

T = int(input())
for i in range(T):
	num = 0
	string = list(input())
	length = len(string)
	for index, letter in enumerate(string):
		string[index]=ord(letter)
	for i in range(0, length//2):
		num += abs(string[i]-string[length-i-1])
	print(num)
