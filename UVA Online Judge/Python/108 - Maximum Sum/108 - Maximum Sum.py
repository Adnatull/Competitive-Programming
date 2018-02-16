def KhelteThako( lst ):
    n = lst
    arr = [[0 for x in range(n + 2)] for y in range(n + 2)]
    i, j = 1, 1
    cnt = 0
    while True:
        if cnt == n * n:
            break
        line = list(map(int, input().split()))
        for x in line:
            arr[i][j] = x
            cnt += 1
            j += 1
            if j > n:
                j = 1
                i = i + 1

    maxSum = int(-1e18)
    tempSum = [0 for i in range (n+2)]
    for Left in range(1, n + 1):  # From Left to Right
        for i in range(1, n + 1):  # for assigning left sum for current Row
            tempSum.insert(i, 0)
        for Right in range(Left, n + 1):  # From left to right
            for i in range(1, n + 1):  # From Top to Bottom
                tempSum[i] = tempSum[i] + arr[i][Right]

            # I will use Kadane's Algorithm in tempSum array
            temp = 0
            temmax = 0
            for i in range(1, n + 1):
                temp = max(tempSum[i], temp+tempSum[i])
                temmax = max(temp, temmax)
            maxSum = max(maxSum, temmax)
    print(maxSum)

#import sys
#sys.stdin = open('108 - Maximum Sum.in', 'r')

while True:
    try:
        lst = int(input())
        KhelteThako(lst)

    except EOFError:
        break
