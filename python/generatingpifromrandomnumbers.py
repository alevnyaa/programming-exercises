#!/usr/bin/env python
import sys

from fractions import gcd
from random import randint
from math import sqrt

if len(sys.argv) == 3:
    trials = int(sys.argv[1])
    rand_digits = int(sys.argv[2])
else:
    trials = int(input("Number of trials: "))
    rand_digits = int(input("Number of digits for random num: "))

rand_max = 10 ** (rand_digits + 1) - 1

print("Successfully got user input and finished setting up")

num_of_coprimes = 0
num_of_cofactors = 0

percentage_step = trials / 100
cur_percent = 0

#Probability that two random numbers are coprime is 6 / pi^2

for x in range(0, trials):
    if gcd(randint(0, rand_max), randint(0, rand_max)) == 1:
        num_of_coprimes += 1

    if x % percentage_step == 0:
        cur_percent += 1
        print("{0}%".format(cur_percent), end='\r')

print("100% complete.") 
coprime_chance = num_of_coprimes / trials

pi = sqrt(6 / coprime_chance)

print("Pi: {0}".format(pi))
