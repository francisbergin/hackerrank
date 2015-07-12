#!/usr/bin/env python3

import random

T = int(input())
for _ in range(T):
    dice = list(map(float, input().split(',')))
    dice_prob = []
    for ind, val in enumerate(dice):
        dice_prob += [ind+1] * int(val*100)
    input()
    ladders = {}
    for i in input().split():
        key, val = list(map(int, i.split(',')))
        ladders[key] = val
    snakes = {}
    for i in input().split():
        key, val = list(map(int, i.split(',')))
        snakes[key] = val
    moves_sample = []
    game_count = 5000
    while game_count != 0:
        moves = 0
        pos = 1
        while pos != 100:
            moves += 1
            if moves == 1000:
                break
            num_moves = random.choice(dice_prob)
            if (pos + num_moves) <= 100:
                pos += num_moves
            if pos in ladders:
                pos = ladders[pos]
            if pos in snakes:
                pos = snakes[pos]
        if moves == 1000:
            continue
        game_count -= 1
        moves_sample.append(moves)
    print(sum(moves_sample)/len(moves_sample))
