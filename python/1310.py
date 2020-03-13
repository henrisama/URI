def max(a, b):
    return a if (a > b) else b

try:
    while(1):
        n = int(input())
        perDayCost = int(input())
        maxendinghere = maxsofar = 0
        for i in range(n):
            x = int(input())
            maxendinghere = max(0, maxendinghere + x - perDayCost)
            maxsofar = max(maxsofar, maxendinghere)
        print(maxsofar)
except EOFError:
    pass