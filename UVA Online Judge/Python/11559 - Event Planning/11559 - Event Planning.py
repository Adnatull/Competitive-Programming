while True:
    try:
        n, budget, hotel, week = list(map(int, input().split()))

        cases = 1
        ans = int(1e18)
        while cases <= hotel:
            cost = int(input())
            w = 1
            seat = list(map(int, input().split()))
            for i in range(0,week):
                x = seat[i]
                if x >= n and n*cost <= budget and n*cost<ans :
                    ans = n*cost
            cases = cases + 1

        if ans == int(1e18):
            print("stay home")
        else:
            print (ans)
    except EOFError:
        break
