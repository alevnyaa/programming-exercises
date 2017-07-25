#!/usr/bin/env python

current_player = 0

players = [{
    'name' : 'X',
    'victories' : 0
    },{
    'name' : 'O',
    'victories' : 0
    }]

rounds_max = 9
rounds_left = rounds_max

print("Tic Tac Toe!\n")

print("Continue with default player names?")

if input("[y/n] ").lower() != 'y':
    players[0]['name'] = input("Player one's name: ")
    players[1]['name'] = input("Player two's name: ")

board =  [[" " for x in range(3)] for y in range(3)]

while rounds_left > 0:
    # decrement round counter
    rounds_left = rounds_left - 1

    # print current player text
    print("{}'s turn:".format(players[current_player]['name']))

    # get valid column and row
    valid_input = False;
    while not valid_input:
        column = int(input("Column: ")) - 1
        row = int(input("Row: ")) - 1

        if(column < 0
                or row < 0
                or column > 2
                or row > 2):
            print("This is not a cell on the board! Try again.")
        else:
            valid_input = True

    # display board

    # check if current player victory

    # change current player
    if current_player == 0:
        current_player = 1
    else:
        current_player = 0
