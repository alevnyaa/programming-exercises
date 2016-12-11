#A script to print a sequence and get nth value
#starts from 1, for each x in sequence there must be one 2x+1 and 3x+1

def getNth(n):
    numbers = [1]
    index = 0;
    for x in numbers:
        values = []
        values.append(2*x+1)
        values.append(3*x+1)
        for value in values:
            if not value in numbers:
                numbers.append(value)
        numbers.sort()
        if index > n: break
        index = index+1
    return numbers[n]

for i in range(0,50):
    print(str(i) + " " + str(getNth(i)))
