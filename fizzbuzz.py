#!/usr/bin/env python
def isInt(s):
    try:
        int(s)
        return True
    except ValueError:
        return False

def getInt():
    isNumInt = False
    #userInput = "" is unneccesary in python, scope works different to C++
    while not(isNumInt):
        userInput = input("Please input an integer greater than 1: \n")
        isNumInt = isInt(userInput)
    return int(userInput)

num = getInt()

for x in range(1, num+1):
    if(x%15==0):
        print("fizzbuzz")
    elif(x%3==0):
        print("fizz")
    elif(x%5==0):
        print("buzz")
    else:
        print(x)

print("END");
