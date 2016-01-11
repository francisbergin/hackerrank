#!/usr/bin/env python3

player = input()

board = []
for _ in range(8):
    board.append(list(input()))

for r in range(7):
    for c in range(7):
        if board[r][c] == board[r+1][c] == board[r][c+1] == '1':
            print(r, c)
            exit(0)

for r in range(8):
    for c in range(8):
        if r < 7 and board[r][c] == board[r+1][c] == '1':
            print(r, c)
            exit(0)
        if c < 7 and board[r][c] == board[r][c+1] == '1':
            print(r, c)
            exit(0)

for r in range(8):
    for c in range(8):
        if board[r][c] == '1':
            print(r, c)
            exit(0)
