#import sys
#sys.stdin = open('in.txt', 'r')

while True:
    n, e = list(map(int, input().split()))
    if n == 0 and e == 0:
        break
    a = [[0 for i in range(1)] for j in range(n)]
    for i in range(0,n):
        l = list(map(int, input().split()))
        a[i] = l
    ans = 0
    for left in range(0, e):
        tmp = [0 for i in range(n)]
        for i in range(0, n):
            tmp[i] = 0

        for right in range(left, e):
            for i in range(0, n):
                if a[i][right] == 1:
                    tmp[i] = 1
            tans = 0
            for i in range(0, n):
                if tmp[i] == 0:
                    tans += 1
                else:
                    tans = 0
                ans = max(tans*(abs(right-left)+1), ans)
    print(ans)
