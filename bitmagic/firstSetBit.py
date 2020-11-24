def getFirstSetBit(n):
    num=(n&(~(n-1)))
    j=0
    while num!=0:
        num=num/2
        j=j+1
    return j

print(getFirstSetBit(12))
