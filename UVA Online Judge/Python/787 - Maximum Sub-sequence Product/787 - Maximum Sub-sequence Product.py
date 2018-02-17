def MaximumProduct( line ):
    length = len(line)
    del line[length-1]
    length -= 1
    ans = line[0]
    for i in range(0,length):
        temp = 1
        for j in range (i, length):
            temp = temp*line[j]
            ans = max(temp, ans)
    print(ans)

#import sys
#sys.stdin = open('787 - Maximum Sub-sequence Product.in', 'r')

while True:
    try:
        line = list(map(int, input().split()))
        MaximumProduct(line)
    except EOFError:
        break
