#!/usr/bin/env python3

def available_squares(board):
    avail = []
    for rownum, row in enumerate(board):
        for colnum, square in enumerate(row):
            if square == '_':
                avail.append((rownum, colnum))
    return avail

def winning_player(board):
    for player in ['O', 'X']:
        for row in board:
            if ''.join(row) == player*3:
                return player
        for col in range(3):
            column = board[0][col] + board[1][col] + board[2][col]
            if column == player*3:
                return player
        diag = board[0][0] + board[1][1] + board[2][2]
        if diag == player*3:
            return player
        diag = board[0][2] + board[1][1] + board[2][0]
        if diag == player*3:
            return player
    return None

def is_empty_board(board):
    for row in board:
        for square in row:
            if square != '_':
                return False
    return True

def is_draw(board):
    for row in board:
        for square in row:
            if square == '_':
                return False
    return True

def minimax(board, player):
    next_player = 'X' if player == 'O' else 'O'
    winner = winning_player(board)
    if winner != None:
        if winner == me:
            return 1
        else:
            return -1
    if is_draw(board):
        return 0

    points = []
    for i in available_squares(board):
        boardtmp = [list(x) for x in board]
        boardtmp[i[0]][i[1]] = next_player
        pts = minimax(boardtmp, next_player)
        points.append(pts)

    if next_player == me:
        return max(points)
    else:
        return min(points)

if __name__ == '__main__':
    player = me = input()
    board = []
    scores = {}

    for i in range(3):
        board.append(list(input()))

    avail = available_squares(board)

    if len(avail) == 9:
        print('1 1')
        exit(0)

    for i in avail:
        boardtmp = [list(x) for x in board]
        boardtmp[i[0]][i[1]] = player
        pts = minimax(boardtmp, player)
        scores[i] = pts

    n = max(scores, key=scores.get)
    # print(scores)
    print(n[0], n[1])
