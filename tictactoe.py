#!/usr/bin/env python

def victory():
    if(false):
        finalized = True;
        if(victoryConditionFor(0)):
            print("First player has won!")
        elif(victoryConditionFor(1)):
            print("Second player has won!")

def victoryConditionFor(player):
    if(player==0):
        player = "X"
    elif(player==1):
        player = "O"

    for i in range(0,3):
        for j in range(0,3):


grid= [["X","X","O"],
       ["O"," ","X"],
       ["X"," ","O"]]
finalized = False
while not(victoryCheck):
    display(grid)
