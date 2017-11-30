"""Given two lists of number, on different lines,
each num separated by spaces, weaves them together.
1 2 3
4 5 6

1 4 2 5 3 6
"""

in_file = open("in.txt")

number_lists = []

for line in in_file:
    number_lists.append(line.split(" "))

def weave_gen(lists):

    

    yield num


out_str = ""


