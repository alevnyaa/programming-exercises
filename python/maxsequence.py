# A function which will return the biggest sum possible for a concurrent sub array in an array

def maxSequence(arr):
    if not arr:
        return 0
    ans = curr = 0
    for x in arr:
        curr += x
        if curr<0:
            curr = 0
        elif curr > ans:
            ans = curr
    return ans 

print(maxSequence([1,2,3,4,-12,5,11]))
