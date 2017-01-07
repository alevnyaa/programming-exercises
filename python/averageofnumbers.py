s = input()
numbers = list(map(int, s.split()))

sumofnum = sum(number for number in numbers)

avr = sumofnum / len(numbers)

print(avr)
