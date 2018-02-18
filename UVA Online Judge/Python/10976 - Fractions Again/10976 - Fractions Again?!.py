#import sys
#sys.stdin = open('10976 - Fractions Again?!.in', 'r')
while True:
    try:
        n = int(input())
        lst = []
        k = int(n+1)
        while k <= n*2:
            if (k*n)%(k-n) == 0:
                lst.append((int((k*n)/(k-n)),k))
            k += 1
        print( len(lst) )
        for i,j in lst:
            print ('1/',n, ' = ', '1/',i, " + ", '1/', j,sep="")
    except EOFError:
        break
