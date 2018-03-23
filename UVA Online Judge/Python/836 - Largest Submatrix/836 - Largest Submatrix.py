def kheleDao(mat, cnt, cases, testCases):
    ans = 0
    for left in range(0, cnt):
        tmp = [1 for i in range(cnt)]
        for right in range(left, cnt):
            for i in range(0, cnt):
                if ord(mat[i][right]) == 48:
                    tmp[i] = 0
            tans = 0
            for i in range(0, cnt):
                if tmp[i] == 1:
                    tans += 1
                else:
                    tans = 0
                ans = max(ans, tans*(abs(right-left)+1))
    print(ans)
    if cases != testCases:
        print("")


# import sys
# sys.stdin = open('in.txt', 'r')

testCases = int(input())
x = input()
for cases in range(1, testCases+1):
    x = None
    mat = [[0 for i in range(0)] for j in range(30)]
    cnt = 0
    while True:
        try:
            x = input()
            if x == "":
                kheleDao(mat, cnt, cases, testCases)
                break
            mat[cnt] = x
            cnt += 1
        except EOFError:
            kheleDao(mat, cnt, cases, testCases)
            break
