# A function which will return the biggest sum possible for a concurrent sub array in an array

def maxSequence(arr):
    if not arr:
        return 0
    sums = []
    length = len(arr)
    for i in range(length):
        value = 0
        j = i
        while (j < length):
            value = value + arr[j]
            sums.append(value)
            j = j + 1
    return max(sums)

print(maxSequence([1,2,3,4,-12,5,11]))
